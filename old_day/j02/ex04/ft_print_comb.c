/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:21:07 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/04 08:25:32 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int tab[3];

	tab[0] = 0;
	while (tab[0] < 8)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] < 9)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] < 10)
			{
				ft_putchar(tab[0] + 48);
				ft_putchar(tab[1] + 48);
				ft_putchar(tab[2] + 48);
				if (!(tab[0] == 7))
					ft_putchar(',');
				if (!(tab[0] == 7))
					ft_putchar(' ');
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
