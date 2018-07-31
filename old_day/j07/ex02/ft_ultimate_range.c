/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:50:01 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/13 11:51:21 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *my_range;
	int i;
	int y;

	if (min >= max)
		return (0);
	y = min;
	i = 0;
	*range = (int*)malloc(sizeof(*range[0]) * (max - min));
	my_range = *range;
	while (i < (max - min))
		my_range[i++] = y++;
	return (max - min);
}
