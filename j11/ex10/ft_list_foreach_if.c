/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:36:45 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 09:46:21 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f) (void *)
		, void *data_ref, int (*cmp) ())
{
	t_list *tmp;

	if (begin_list == NULL)
		return ;
	tmp = begin_list;
	while (tmp != NULL)
	{
		if (cmp(tmp->data, data_ref) == 0)
			f(tmp->data);
		tmp = tmp->next;
	}
}
