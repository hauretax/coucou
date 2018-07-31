/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:19:09 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/12 21:43:56 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			c_w(char *str)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
		if (str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n')
			w++;
	}
	return (w);
}

int			c_c(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		i++;
	return (i);
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		y;
	char	**ns;

	i = 0;
	ns = (char**)malloc(sizeof(char *) * (c_w(str) + 1));
	while (*str)
	{
		y = 0;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str == '\0')
			break ;
		ns[i] = (char*)malloc(sizeof(char) * (c_c(str) + 1));
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
		{
			ns[i][y] = *str;
			str++;
			y++;
		}
		ns[i][y] = '\0';
		i++;
	}
	ns[i] = 0;
	return (ns);
}
