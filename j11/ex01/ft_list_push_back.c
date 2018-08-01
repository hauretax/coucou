/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:37:47 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/20 16:12:38 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *temp;

	new = ft_create_elem(data);
	temp = *begin_list;
	if (temp == NULL)
	{
		*begin_list = new;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
