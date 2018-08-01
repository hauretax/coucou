/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:32:19 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/25 14:03:21 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	i;

	i = 0;
	if (begin_list == NULL)
		return (NULL);
	tmp = begin_list;
	while (i < nbr && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < nbr)
		return (NULL);
	return (tmp);
}
