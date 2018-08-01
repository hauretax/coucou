/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 08:46:17 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 09:45:40 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp;

	if (begin_list == NULL)
		return ;
	tmp = begin_list;
	while (tmp != NULL)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
