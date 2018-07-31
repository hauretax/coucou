/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 19:14:57 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/08 19:15:01 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_p(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < (nb / 2) + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	if (nb <= 1)
		return (2);
	while (i < i * 2)
	{
		if (ft_is_p(i))
			return (i);
		i++;
	}
	return (0);
}
