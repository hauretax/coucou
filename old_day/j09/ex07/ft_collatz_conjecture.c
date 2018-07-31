/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:12:07 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/13 11:02:47 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if (base % 2 != 0)
		ft_collatz_conjecture((base * 3) + 1);
	else
		ft_collatz_conjecture((base / 2) + 2);
	return (base);
}
