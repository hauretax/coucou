/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:06:59 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/22 21:51:46 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	if (begin_list == NULL)
		return (NULL);
	if (begin_list->next == NULL)
		return (begin_list);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
