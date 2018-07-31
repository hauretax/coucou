/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 10:29:29 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/05 13:02:32 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_trie(int *tab, int size, int i, int d)
{
	int s;
	int y;

	y = 0;
	while (y <= size - 1)
	{
		if (tab[y] > tab[i])
		{
			s = tab[i];
			tab[i] = tab[y];
			tab[y] = s;
		}
		if (tab[y] < tab[d - 1])
		{
			s = tab[d - 1];
			tab[d - 1] = tab[y];
			tab[y] = s;
		}
		y++;
	}
}

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int x;
	int d;

	i = 0;
	x = 0;
	d = size;
	while (x <= size - 1)
	{
		ft_trie(tab, size, i, d);
		x++;
		i++;
		d--;
	}
}
