/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:34:03 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/19 09:02:52 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabr;

	tabr = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		tabr[i] = f(tab[i]);
		i++;
	}
	return (tabr);
}
