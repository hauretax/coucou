/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 16:11:01 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/16 12:26:22 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H

# define FT_STOCK_PAR_H
# include <stdlib.h>

char			**ft_split_whitespaces(char *str);
typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;
#endif
