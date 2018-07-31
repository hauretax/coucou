/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:09:59 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/05 17:38:19 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
	else
		ft_putchar(nbr + 48);
}
