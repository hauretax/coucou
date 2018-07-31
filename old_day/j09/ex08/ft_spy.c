/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:06:37 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/13 11:21:29 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strfind(char *str, char *to_find)
{
	int y;

	y = 0;
	if (*to_find == '\0')
		return (0);
	while (*str != '\0')
	{
		y = 0;
		while (str[y] == to_find[y] && str[y])
			++y;
		if (to_find[y] == '\0')
			return (1);
		++str;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		if (ft_strfind(argv[i], "president"))
			write(1, "Alert!!!\n", 9);
		if (ft_strfind(argv[i], "Bauer"))
			write(1, "Alert!!!\n", 9);
		if (ft_strfind(argv[i], "attack"))
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
