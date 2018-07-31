/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:02:31 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/17 11:18:15 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int y;

	y = 0;
	while (tab[y])
	{
		if (f(tab[y]) == 1)
			return (1);
		y++;
	}
	return (0);
}