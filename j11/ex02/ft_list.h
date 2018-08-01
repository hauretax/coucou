/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:37:45 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/20 16:13:09 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list	t_list;

struct					s_list
{
	void				*data;
	t_list				*next;
};

t_list					*ft_create_elem(void *data);

#endif
