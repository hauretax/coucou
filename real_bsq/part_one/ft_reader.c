/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:59:58 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 21:15:33 by lramard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include <stdio.h>

int		ft_read_arg(int fd, char *buf,t_list **list)
{
	int counter;

	counter = 0;
	while((read(fd, buf, 1)) && buf[0] != '\n')
	{
		ft_list_push_front(list, buf[0]);
		counter++;
	}
	return (counter);
}

int		ft_read_fline(int fd, char *buf, t_list **list, t_global *global)
{
	int counter;

	counter = 0;
	while((read(fd, buf, 1)) && buf[0] != '\n')
	{
		ft_list_push_back(list, buf[0]);
		counter++;
	}
	print_list(*list);
	global->nc = counter;
	return (counter);
}

int		ft_read_map(int fd, char *buf,  t_global *global)
{
	int nb_of_line;
	int count2;

	nb_of_line = 1;
	count2 = 0;
	while((read(fd, buf, 1)) && nb_of_line < global->nl)
	{
		puts("avant if");
		if(buf[0] == '\n')
		{
			count2 = 0;
			puts("in if");
			if (count2 > global->nc)
				return (-1);
			puts("nb_of_line = ");
			printf("%d\n", nb_of_line);
			puts("global -> nl");
			printf("%d\n",global->nl);
			nb_of_line++;
		}
		else
		{
			puts("K");
			printf("%c\n",buf[0]);
			puts("K");
			if (buf[0] != global->empty && buf[0] != global->obs && buf[0] != '\n')
			{
				puts("STOP");
				return (-1);
			}

			puts("aprs if");
			if (buf[0] != '\n')
				ft_add_tab(global, buf[0], count2, nb_of_line);
			puts("apres addtab");
			count2++;
		}
	}
	return (1);
}
