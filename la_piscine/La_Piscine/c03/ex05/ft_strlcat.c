/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:22:14 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 11:17:31 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_len;

	i = ft_strlen(dest);
	j = 0;
	dest_len = i;
	while (j < ((long long)size - (long long)dest_len - 1) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	if (size < dest_len)
		return (size + ft_strlen(src));
	else
		return (dest_len + ft_strlen(src));
}
