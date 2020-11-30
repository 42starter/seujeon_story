/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:20:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:29:41 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = 0;
}

void	ft_strncat(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

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

char	*ft_strndup(char *str, unsigned int n)
{
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	ft_strncpy(res, str, n);
	return (res);
}
