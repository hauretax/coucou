/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:38:31 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/18 16:58:19 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H

# define FILE_H

# include <unistd.h>

typedef	struct	s_opp
{
	char	*c;
	void	(*f)(int, int);
}				t_opp;

int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_div(int nb1, int nb2);
void			ft_mod(int nb1, int nb2);
void			ft_mul(int nb1, int nb2);
void			ft_add(int nb1, int nb2);
void			ft_sub(int nb1, int nb2);
void			ft_usage(int nb1, int nb2);
#endif
