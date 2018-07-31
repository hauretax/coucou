/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:37:43 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/12 18:29:01 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			str_cmp_all(char **argv)
{
	int		i;
	int		y;
	int		c;

	c = 0;
	y = 0;
	while (argv[y])
	{
		i = 0;
		while (argv[y][i])
		{
			i++;
			c++;
		}
		c++;
		y++;
	}
	return (c);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		y;
	int		c;
	char	*str;

	argc = argc + 1;
	c = 0;
	y = 1;
	str = (char *)malloc(sizeof(*str) * (str_cmp_all(argv) * 100));
	while (argv[y])
	{
		i = 0;
		while (argv[y][i])
		{
			str[c] = argv[y][i];
			i++;
			c++;
		}
		if (argv[y + 1])
			str[c] = '\n';
		y++;
		c++;
	}
	return (str);
}
