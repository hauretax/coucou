/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:51:57 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/21 22:28:08 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	ft_putchar(char c);

void	p_t(int x, char *str, int *p)
{
	int i;

	i = 1;
	str[*p] = 'o';
	*p = *p + 1;
	while (i < x - 1)
	{
		str[*p] = '-';
		*p = *p + 1;
		i++;
	}
	if (x > 1)
		str[*p] = 'o';
		*p = *p + 1;
	str[*p] = '\n';
	*p = *p + 1;
}

void	p_m(int x, char *str, int *p)
{
	int i;

	i = 0;
	str[*p] = '|';
	*p = *p + 1;
	while (i < x - 2)
	{
		str[*p] = ' ';
		*p = *p + 1;
		i++;
	}
	if (x > 1)
		str[*p] = '|';
		*p = *p + 1;
	str[*p] = '\n';
	*p = *p + 1;
}

void	p_b(int x, char *str, int *p)
{
	int i;

	i = 1;
	str[*p] = 'o';
	*p = *p + 1;
	while (i < x - 1)
	{
		str[*p] = '-';
		*p = *p + 1;
		i++;
	}
	if (x > 1)
		str[*p] = 'o';
		*p = *p + 1;
	str[*p] = '\n';
	*p = *p + 1;
}

char	*rush(int x, int y, char *str , int *p)
{
	if (x <= 0 || y <= 0)
		return ("");
	p_t(x , str, p);
	while (y > 2)
	{
		p_m(x , str, p);
		y--;
	}
	if (y > 1)
		p_b(x , str, p);
	return (str);
}

int main(int argc, char **argv)
{
	char *str;
	int x;
	int y;
	int p;

	p = 0;
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if((str = malloc(sizeof(char) * (y * (x + 1)) + 1)) == NULL)
		return (0);
	if (argc != 3)
		return (0);
	str = rush(x, y, str, &p);
	str[p] = '\0';
	ft_putstr(str);
	return (0);
}
