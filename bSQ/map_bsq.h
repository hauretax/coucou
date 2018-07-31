/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:36:18 by erli              #+#    #+#             */
/*   Updated: 2018/07/23 14:04:09 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_BSQ_H
# define MAP_BSQ_H

typedef	struct		s_list
{
	char			c;
	struct s_list	*next;
}					t_list;

typedef	struct		s_coord
{
	int 			x;
	int 			y;
}					t_coord;

typedef	struct		s_global
{
	int				nl;
	int				nc;
	char 			empty;
	char			full;
	char			obs;
	int				**map;
}					t_global;

typedef	struct		s_sq
{
	t_coord 		*top;
	t_coord			*bot;
}					t_sq;

#endif
