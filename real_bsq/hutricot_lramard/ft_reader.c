/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:59:58 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 22:00:03 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int		ft_read_arg(int fd, char *buf, t_list **list)
{
	int counter;

	counter = 0;
	while ((read(fd, buf, 1)) && buf[0] != '\n')
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
	while ((read(fd, buf, 1)) && buf[0] != '\n')
	{
		ft_list_push_back(list, buf[0]);
		counter++;
	}
	global->nc = counter;
	return (counter);
}

int		ft_read_map(int fd, char *buf, t_global *global)
{
	int nb_of_line;
	int count2;

	nb_of_line = 1;
	count2 = 0;
	while ((read(fd, buf, 1)) && nb_of_line < global->nl)
	{
		if (buf[0] == '\n')
		{
			count2 = 0;
			if (count2 > global->nc)
				return (-1);
			nb_of_line++;
		}
		else
		{
			if (buf[0] != global->empty && buf[0] !=
					global->obs && buf[0] != '\n')
				return (-1);
			if (buf[0] != '\n')
				ft_add_tab(global, buf[0], count2, nb_of_line);
			count2++;
		}
	}
	return (1);
}
