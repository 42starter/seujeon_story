/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:30:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/28 22:42:23 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1++ != *s2++)
			return (*(s1 - 1) - *(s2 - 1));
	}
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (n-- && src[j])
	{
		dest[i + j] = src[j];
		i++;
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*res;

	res = dest;
	if (n <= 0)
		return (res);
	while (n-- && *src)
		*dest++ = *src++;
	*dest = 0;
	return (res);
}
