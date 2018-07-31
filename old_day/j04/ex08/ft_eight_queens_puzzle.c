/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:42:16 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/07 16:50:52 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_v(int *tab, int p)
{
	int i;
	int nb;
	int nb2;

	i = 1;
	while (i < p)
	{
		nb = i - p;
		nb2 = tab[i] - tab[p];
		if (nb < 0)
			nb = nb * -1;
		if (nb2 < 0)
			nb2 = nb2 * -1;
		if (tab[i] == tab[p] || nb == nb2)
			return (0);
		i++;
	}
	return (1);
}

int		ft_r(int *tab, int p)
{
	if (p == 9)
	{
		tab[0]++;
		return (0);
	}
	tab[p] = 1;
	while (tab[p] <= 8)
	{
		if (ft_v(tab, p))
			ft_r(tab, p + 1);
		tab[p]++;
	}
	return (0);
}

int		ft_eight_queens_puzzle(void)
{
	int	tab[9];
	int	i;

	i = 0;
	while (i <= 8)
	{
		tab[i] = 0;
		i++;
	}
	tab[1] = 1;
	while (tab[1] <= 8)
	{
		ft_r(tab, 2);
		tab[1]++;
	}
	return (tab[0]);
}
