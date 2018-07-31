/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:03:46 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/06 16:51:36 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_r_power(int nb, int power)
{
	if (power > 1)
		nb = nb * ft_r_power(nb, power - 1);
	return (nb);
}

int		ft_sqrt(int nb)
{
	int i;
	int nbb;

	i = 0;
	while (i < nb)
	{
		nbb = ft_r_power(i, 2);
		if (nb == nbb)
			return (i);
		i++;
	}
	return (0);
}
