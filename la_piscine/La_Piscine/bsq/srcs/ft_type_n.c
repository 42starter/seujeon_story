/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:20:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 01:56:41 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_typencpy(t_type *dest, t_type *src, t_type n)
{
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = 0;
}

void	ft_typencat(t_type *dest, t_type *src, t_type n)
{
	t_type i;
	t_type j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (n > 0 && src[j])
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	dest[i + j] = 0;
}

t_type	*ft_typendup(t_type *str, t_type n)
{
	t_type	*res;

	if (!(res = (t_type *)malloc(sizeof(t_type) * (n + 1))))
		return (0);
	ft_typencpy(res, str, n);
	return (res);
}
