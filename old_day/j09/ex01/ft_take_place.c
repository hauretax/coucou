/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:12:29 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/12 20:53:55 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	int		hour2;
	char	str;
	char	str2;

	if (hour > 12)
	{
		hour = hour - 12;
		str = "P.M.";
	}
	else
		str = "A.M.";
	hour2 = hour + 1;
	if (hour > 12)
	{
		hour2 = hour2 - 12;
		str = "P.M.";
	}
	else
		str = "A.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", hour);
	printf(".00 %s AND ", str);
	printf("%d", hour2);
	printf(".00 %s AND", str2);
	printf("\n");
}
