/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:19:09 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/19 16:29:48 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "ft_opp.h"

void	ft_error(void)
{
	int i;

	i = 0;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(g_opptab[i].c);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.\n");
}

void	ft_calcul(char **av)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(g_opptab[i].c, av[2]) == 0)
		{
			g_opptab[i].f(ft_atoi(av[1]), ft_atoi(av[3]));
			ft_putchar('\n');
			return ;
		}
		i++;
	}
	ft_error();
	g_opptab[5].f(0, 0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_calcul(argv);
	return (0);
}
