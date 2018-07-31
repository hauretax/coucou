/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proto.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:40:40 by erli              #+#    #+#             */
/*   Updated: 2018/07/24 23:30:43 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROTO_H
# define FT_PROTO_H

# include "map_bsq.h"

t_list		*create_elem(char c);
t_list		*add_link_front(t_list *list, char c);
t_list		*add_link_back(t_list *list, char c);
void		next_link(t_list **link);
t_global	*init_global(void);
int			test_map_param(t_list *list, t_global *glob);
int			test_char(char c, t_global *glob);
void		symbol_to_int(t_global *glob, char c, int y, int x);
void		print_list(t_list *list);
int			map_alloc(t_global *glob, int i);
void		print_map(t_global *glob, int n);
t_sq		where(int **tab, t_global glob);
void		ft_print_result(t_sq b_s, t_global *glob);
void		print_tan(t_global *glob);
#endif
