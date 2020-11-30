/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:24:57 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 01:56:09 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsq.h>

t_type	*ft_realloc(t_type *pre, t_type *pre_size)
{
	char	*res;

	if (!(res = (t_type *)malloc(sizeof(t_type *) * ((*pre_size << 1) + 1))))
		return (0);
	ft_typencpy(res, pre, *pre_size);
	*pre_size = (*pre_size << 1) + 1;
	ft_free_safety(pre);
	return (res);
}
