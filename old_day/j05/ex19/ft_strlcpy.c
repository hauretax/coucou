/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:23:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/09 13:57:18 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	y;

	y = 0;
	while (y < size - 1 && src[y])
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	while (src[y])
		y++;
	return (y);
}
