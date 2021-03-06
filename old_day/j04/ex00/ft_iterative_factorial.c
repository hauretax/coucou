/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:07:20 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/07 22:11:10 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int y;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 16)
		return (0);
	i = 1;
	y = 1;
	while (i <= nb)
	{
		y = y * i;
		i++;
	}
	return (y);
}
