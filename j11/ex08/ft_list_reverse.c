/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:57:50 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 09:45:58 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *befor;
	t_list *curent;
	t_list *after;

	befor = NULL;
	curent = *begin_list;
	if (curent == NULL || curent->next == NULL)
		return ;
	while (after != NULL)
	{
		after = curent->next;
		curent->next = befor;
		befor = curent;
		curent = after;
	}
	*begin_list = befor;
}
