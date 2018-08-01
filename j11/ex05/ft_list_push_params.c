/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:54:59 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 09:45:13 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_l_p_b(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*temp;

	new = ft_create_elem(data);
	temp = *begin_list;
	if (temp == NULL)
	{
		*begin_list = new;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;

	list = NULL;
	ac--;
	while (ac >= 0)
	{
		ft_l_p_b(&list, av[ac]);
		ac--;
	}
	return (list);
}
