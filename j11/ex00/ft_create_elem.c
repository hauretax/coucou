/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 09:45:07 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/20 16:35:14 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*m_f;

	if ((m_f = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	m_f->next = NULL;
	m_f->data = data;
	return (m_f);
}
