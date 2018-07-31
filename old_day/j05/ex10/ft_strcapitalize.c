/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 14:32:03 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/08 16:40:01 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_all(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_all(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <=
					'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] = str[i] + 32;
			i++;
		}
		i++;
	}
	return (str);
}
