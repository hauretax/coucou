/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:56:58 by lramard           #+#    #+#             */
/*   Updated: 2018/07/25 21:59:29 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_bsq.h"
#include <fcntl.h>

t_global		*ft_init_all(void)
{
	t_global	*global;

	if (!(global = (t_global *)malloc(sizeof(t_global))))
		return (0);
	global->nc = 0;
	global->nl = 0;
	return (global);
}

int				ft_malloc_tab(t_global *global, int counter, t_list *list)
{
	int			j;
	int			i;
	int			trou;

	j = 0;
	i = 0;
	while (j < global->nl)
	{
		if (!(global->map[j] = (int*)malloc(sizeof(int) * (counter))))
			return (-1);
		j++;
	}
	trou = 0;
	while (i < counter)
	{
		if (list->c != global->obs && list->c != global->empty)
			return (-1);
		if (list->c == global->obs)
			trou += 1;
		global->map[0][i] = trou;
		list = list->next;
		i++;
	}
	return (1);
}

void			ft_add_tab(t_global *global, char c, int count2, int nb_of_line)
{
	int			trou;

	trou = 0;
	if (c == global->obs)
		trou = 1;
	if (count2 > 0)
		global->map[nb_of_line][count2] = global->map[nb_of_line - 1][count2]
			+ global->map[nb_of_line][count2 - 1] - global->map[nb_of_line - 1]
				[count2 - 1] + trou;
	if (count2 == 0)
		global->map[nb_of_line][count2] = global->map[nb_of_line - 1][count2]
				+ trou;
}

int				ft_init(int fd, t_global *global)
{
	char		buf[2];
	int			counter;
	t_list		*list;
	t_list		*list2;

	counter = 0;
	list = 0;
	list2 = 0;
	counter = ft_read_arg(fd, buf, &list);
	if (ft_check_and_extract(counter, list, global) != 1)
		return (-1);
	counter = 0;
	counter = ft_read_fline(fd, buf, &list2, global);
	if (!(global->map = (int**)malloc(sizeof(int*) * (global->nl))))
		return (-1);
	if (ft_malloc_tab(global, counter, list2) != 1)
		return (-1);
	ft_read_map(fd, buf, global);
	return (0);
}

int				main(int argc, char **argv)
{
	int			i;
	int			fd;
	t_global	*global;

	global = ft_init_all();
	i = 1;
	if (argc == 1)
		ft_init(0, global);
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!(fd = open(argv[i], O_RDONLY)))
				ft_putstr("MAP ERROR");
			ft_init(fd, global);
			i++;
		}
	}
	ft_print_result(where(global->map, *global), global);
	return (0);
}
