/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:57:21 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/09 20:23:48 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	p_tab(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		f_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int z;
	int y;

	y = 1;
	if (argc == 1)
		return (0);
	while (argv[y])
	{
		i = 1;
		z = 1;
		while (argv[i])
		{
			if (f_strcmp(argv[z], argv[i]) > 0)
				z = i;
			i++;
		}
		y++;
		p_tab(argv[z]);
		argv[z][0] = 127;
	}
	return (0);
}
