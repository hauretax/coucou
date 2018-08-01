/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 09:47:59 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 10:07:32 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp) ())
{
	t_list	*tmp;

	if (begin_list == NULL)
		return (NULL);
	tmp = begin_list;
	while (tmp != NULL)
	{
		if (cmp(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
