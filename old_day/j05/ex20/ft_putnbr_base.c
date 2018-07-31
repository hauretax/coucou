/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:12:20 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/10 15:14:13 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_b(int nbr, char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	if (nbr > i - 1)
	{
		ft_putnbr_b(nbr / i, base);
		ft_putchar(base[nbr % i]);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int y;

	y = 0;
	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return ;
	i = 0;
	while (base[i])
	{
		y = i + 1;
		while (base[y])
		{
			if (base[i] == base[y] || base[i] == '+' || base[i] == '-'
					|| base[i] == '\t' || base[i] == '\n' || base[i] == ' ')
				return ;
			y++;
		}
		i++;
	}
	ft_putnbr_b(nbr, base);
}
