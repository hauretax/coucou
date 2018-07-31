/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:38:46 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/09 16:48:19 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int y;

	i = 1;
	if (argc < 1)
		return (0);
	while (argv[i])
	{
		y = 0;
		while (argv[i][y])
		{
			ft_putchar(argv[i][y]);
			y++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
