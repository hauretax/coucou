/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 18:10:19 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/22 20:48:12 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int			ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = begin_list;
	if (temp == NULL)
		return (0);
	i++;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
