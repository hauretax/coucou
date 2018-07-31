/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 19:41:45 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/16 12:27:04 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void				f_pn(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr > 9)
	{
		f_pn(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}

void				f_ps(char *str)
{
	int				i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void				ft_show_tab(struct s_stock_par *par)
{
	int				i;
	int				y;

	i = 0;
	while (par[i].str != 0)
	{
		f_ps(par[i].str);
		f_pn(par[i].size_param);
		ft_putchar('\n');
		y = 0;
		while (par[i].tab[y])
		{
			f_ps(par[i].tab[y]);
			y++;
		}
		i++;
	}
}
