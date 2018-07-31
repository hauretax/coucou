/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:56:06 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/10 20:16:32 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	x;
	unsigned int	c;

	i = 0;
	y = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[y] && size > y)
		y++;
	c = i;
	while (src[x] && x < size - i - 1 && size > i)
	{
		dest[c] = src[x];
		c++;
		x++;
	}
	return (y + i);
}
