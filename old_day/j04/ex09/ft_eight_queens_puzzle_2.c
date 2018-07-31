/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:46:35 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/07 16:24:03 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_p_t(int *tab)
{
	int i;

	i = 1;
	while (i <= 8)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	ft_putchar('\n');
}

int		ft_verif(int *tab, int p)
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

int		ft_recursive(int *tab, int p)
{
	if (p == 9)
	{
		ft_p_t(tab);
		tab[0]++;
		return (0);
	}
	tab[p] = 1;
	while (tab[p] <= 8)
	{
		if (ft_verif(tab, p))
			ft_recursive(tab, p + 1);
		tab[p]++;
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int		tab[9];
	int		i;

	i = 0;
	while (i <= 8)
	{
		tab[i] = 0;
		i++;
	}
	tab[1] = 1;
	while (tab[1] <= 8)
	{
		ft_recursive(tab, 2);
		tab[1]++;
	}
}
