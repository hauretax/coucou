/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:37:28 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/24 10:56:12 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <stdio.h>

void	print_tab(t_global *glob)
{
	int i;
	int j;

	j = 0;
	printf("----------------------------------------------------\n");
	while (j < glob->nl)
	{
	//	printf("\n");		
		i = 0;
		while (i < glob->nc)
		{
			if (glob->map[j][i] < 1000)
				printf(" ");
			if (glob->map[j][i] < 100)
				printf(" ");
			if (glob->map[j][i] < 10)
				printf(" ");
			printf("%d", glob->map[j][i]);
			i++;
		}
		printf("\n");
		j++;
	}	
	printf("----------------------------------------------------\n");
}
