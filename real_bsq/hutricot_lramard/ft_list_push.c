/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:04:46 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 21:58:43 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"

t_list		*ft_create_elem(char c)
{
	t_list	*elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->next = NULL;
	elem->c = c;
	return (elem);
}

void		ft_list_push_front(t_list **list, char c)
{
	t_list *tmp;

	if (list == 0 || *list == 0)
		*list = ft_create_elem(c);
	else
	{
		tmp = ft_create_elem(c);
		tmp->next = *list;
		*list = tmp;
	}
}

void		ft_list_push_back(t_list **list, char c)
{
	t_list	*tmp;

	if (list == NULL || *list == NULL)
		*list = ft_create_elem(c);
	else
	{
		tmp = *list;
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = ft_create_elem(c);
	}
}
