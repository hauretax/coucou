/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 16:27:30 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/16 12:16:17 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					f_l(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*f_c(char *src)
{
	int				i;
	char			*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*ret;
	int				i;

	i = 0;
	if ((ret = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		ret[i].size_param = f_l(av[i]);
		ret[i].str = av[i];
		ret[i].copy = f_c(av[i]);
		ret[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
