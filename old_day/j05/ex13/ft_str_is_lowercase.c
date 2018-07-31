/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 18:09:56 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/08 18:12:18 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] <= 'z' && str[i] >= 'a' && str[i])
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
