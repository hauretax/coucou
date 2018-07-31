/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:08:35 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/19 22:50:21 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		y;
	char	*sav;

	y = 0;
	while (tab[y])
	{
		i = y;
		while (tab[i])
		{
			if (cmp(tab[y], tab[i]) > 0)
			{
				sav = tab[i];
				tab[i] = tab[y];
				tab[y] = sav;
			}
			i++;
		}
		y++;
	}
}
