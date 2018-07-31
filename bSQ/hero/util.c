/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:24:34 by erli              #+#    #+#             */
/*   Updated: 2018/07/24 11:38:19 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <stdlib.h>
#include <stdio.h>

t_global	*init_global(void)
{
	t_global *glob;

	if (!(glob = (t_global *)malloc(sizeof(t_global))))
		return (0);
	glob->nc = 0;
	glob->nl = 0;
	return (glob);
}

void		symbol_to_int(t_global *glob, char c, int y, int x)
{
	int incr;
	int top;
	int behind;

	incr = 0;
	top = 0;
	behind = 0;
	if (c == glob->obs)
		incr = 1;
	if (x == 0)
		behind = 0;
	else
		behind = (glob->map)[y][x - 1];
	if (y == 0)
		top = 0;
	else
		top = (glob->map)[y - 1][x];
	(glob->map)[y][x] = top + behind + incr;
	if (x >= 1 && y >= 1)
		(glob->map)[y][x] -= (glob->map)[y - 1][x - 1];
}

int			map_alloc(t_global *glob, int i)
{
	if (!((glob->map)[i] = (int *)malloc(sizeof(int) * (glob->nc))))
		return (-2);
	return (0);
}

void		print_map(t_global *glob, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < n)
	{
		printf("\n| ");
		while (i < glob->nc)
		{
			if (glob->map[j][i] < 1000)
				printf(" ");
			if (glob->map[j][i] < 100)
				printf(" ");
			if (glob->map[j][i] < 10)
				printf(" ");
			printf("%d | ", glob->map[j][i]);
			i++;
		}
		i = 0;
		j++;
	}
}
