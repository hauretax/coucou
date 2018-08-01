/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 21:28:42 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/24 11:26:34 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*stmp;

	if (*begin_list == NULL)
		return ;
	while (1)
	{
		tmp = *begin_list;
		if (tmp->next == NULL)
		{
			free(tmp);
			break ;
		}
		stmp = *begin_list;
		while (tmp->next != NULL)
		{
			stmp = tmp;
			tmp = tmp->next;
		}
		stmp->next = NULL;
		free(tmp);
	}
	*begin_list = NULL;
}
