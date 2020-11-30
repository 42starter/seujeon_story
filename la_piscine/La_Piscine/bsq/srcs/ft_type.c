/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:48:06 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 01:57:51 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_typelen(t_type *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_typecpy(t_type *dest, t_type *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = 0;
}

t_type	*ft_typedup(t_type *str)
{
	t_type	*res;

	if (!(res = (t_type *)malloc(sizeof(t_type) * (ft_typelen(str) + 1))))
		return (0);
	ft_typecpy(res, str);
	return (res);
}
