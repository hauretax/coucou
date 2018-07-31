/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:53:17 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/11 20:49:53 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int y;

	y = 0;
	while (tab[y])
	{
		i = 0;
		while (tab[y][i])
		{
			ft_putchar(tab[y][i]);
			i++;
		}
		ft_putchar('\n');
		y++;
	}
}
