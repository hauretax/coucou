/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:36:18 by erli              #+#    #+#             */
/*   Updated: 2018/07/25 22:17:27 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_BSQ_H

# define MAP_BSQ_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_coord
{
	int				x;
	int				y;
}					t_coord;

typedef	struct		s_list
{
	char			c;
	struct s_list	*next;
}					t_list;

typedef	struct		s_global
{
	int				nl;
	int				nc;
	char			empty;
	char			full;
	char			obs;
	int				**map;
}					t_global;

typedef	struct		s_sq
{
	t_coord			*top;
	t_coord			*bot;
}					t_sq;

int					ft_check_and_extract(int counter, t_list *list,
		t_global *global);
int					ft_extract_toglob(t_list *list, t_global *global);
int					ft_checker_param(t_global *global);
int					ft_read_arg(int fd, char *buf, t_list **list);
int					ft_read_fline(int fd, char *buf, t_list **list,
		t_global *glb);
int					ft_read_line(int fd, char *buf, t_list *list,
		t_global *glb);
int					ft_read_map(int fd, char *buf, t_global *glob);
t_list				*ft_create_elem(char c);
void				ft_list_push_front(t_list **list, char c);
void				ft_list_push_back(t_list **list, char c);
void				ft_putstr(char *str);
void				ft_add_tab(t_global *glob, char c, int x, int y);
t_sq				where(int **tab, t_global data);
void				ft_print_result(t_sq b_s, t_global *glob);
#endif
