/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 09:57:55 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/08 12:16:01 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int y;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		y = 0;
		while (str[y] == to_find[y] && str[y])
			++y;
		if (to_find[y] == '\0')
			return (str);
		++str;
	}
	return (0);
}
