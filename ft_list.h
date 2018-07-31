/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:37:45 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/26 09:52:33 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list t_list;

struct s_list
{
	void *data;
	t_list *next;
};

t_list			ft_create_elem(void *data);
void			ft_list_push_back(t_list **list, void *str);
void			ft_putstr(char *str);
void			ft_list_push_front(t_list **begin_list, void *data);
int				ft_list_size(t_list *begin_list);
t_list			*ft_list_last(t_list *begin_list);
t_list			*ft_list_push_params(int ac, char **av);
void			ft_list_clear(t_list **begin_list);
t_list			*ft_list_at(t_list * begin_list, unsigned int nbr);
void			ft_list_reverse(t_list **begin_list);
void			ft_list_foreach(t_list *begin_list, void (*f)(void *));
void			ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp) ());
t_list			*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp) ());
#endif