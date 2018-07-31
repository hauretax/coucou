/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:50:59 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/09 16:54:10 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int y;

	i = argc - 1;
	if (argc < 1)
		return (0);
	while (i > 0)
	{
		y = 0;
		while (argv[i][y])
		{
			ft_putchar(argv[i][y]);
			y++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
