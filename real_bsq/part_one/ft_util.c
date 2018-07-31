/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:56:53 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 19:42:35 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_list(t_list *list)
{
	t_list *tmp;

	tmp = list;
	printf("Contenu de la liste :\n");
	while (tmp != 0)
	{
		printf("%c\n", tmp->c);
		tmp = tmp->next;
	}
}

void	print_map(t_global *glob, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		printf("| ");
		i = 0;
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
		j++;
		printf("\n");
	}
}