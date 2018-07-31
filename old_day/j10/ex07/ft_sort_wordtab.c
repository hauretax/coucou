/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:48:40 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/19 15:48:42 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			f_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_sort_wordtab(char **tab)
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
			if (f_strcmp(tab[y], tab[i]) > 0)
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
