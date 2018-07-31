/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:43:44 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/19 20:52:52 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int c1;
	int c2;
	int s;

	i = -1;
	c1 = 0;
	c2 = 0;
	if (length < 2)
		return (1);
	while (i++ < length - 1)
	{
		s = f(tab[i], tab[i + 1]);
		if (s >= 0)
			c1++;
	}
	while (--i > 0)
	{
		s = f(tab[i], tab[i - 1]);
		if (s >= 0)
			c2++;
	}
	if (c1 == length - 1 || c2 == length - 1)
		return (1);
	return (0);
}
