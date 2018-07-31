/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hutricot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:08:37 by hutricot          #+#    #+#             */
/*   Updated: 2018/07/12 22:17:04 by hutricot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i < j && j > k)
		return (j);
	if (j < i && i > k)
		return (i);
	if (k < j && j > i)
		return (j);
	if (k < i && i > j)
		return (j);
	if (i < k && k > j)
		return (k);
	if (j < k && k > i)
		return (k);
	return (0);
}
