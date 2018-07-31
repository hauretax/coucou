/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_param.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 21:08:44 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 20:40:35 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"

#include <stdio.h>

int		ft_extract_toglob(t_list *list, t_global *global)
{
	int power;

	power = 1;
	print_list(list);
	if (list == 0 || list->next == 0 || list->next->next == 0)
		return (-1);
	global->full = list->c;
	list = list->next;
	global->obs = list->c;
	list = list->next;
	global->empty = list->c;
	while (list->next != 0)
	{
		list = list->next;
		if (list->c < 48 ||list->c >57)
			return (-1);
		global->nl += (list->c - '0') * power;
		power *= 10;
	}
	return (1);
}

int		ft_checker_param(t_global *global)
{
	if (global->nl < 0)
		return (-1);
	if (global->empty == global->full || global->empty == global->obs || 
			global->full == global->obs)
		return(-1);
	if(global->empty < 32 || global->empty == 127)
		return(-1);
	if(global->full < 32 || global->full == 127)
		return (-1);
	if(global->obs < 32 || global->obs == 127)
		return (-1);
	return (1);
}

int		ft_check_and_extract(int counter,t_list *list,t_global *global)
{
	if(counter > 13)
		return (-1);
	if(ft_extract_toglob(list, global) != 1)
		return (-1);
	if(ft_checker_param(global) != 1)
		return (-1);
	return (1);
}
