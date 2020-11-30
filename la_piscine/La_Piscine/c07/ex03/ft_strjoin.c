/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 02:43:48 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 21:54:49 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strslen(char **strs, int size)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += ft_strlen(strs[i]);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		index;

	if (size <= 0)
	{
		res = (char *)malloc(sizeof(char) * 1);
		*res = 0;
		return (res);
	}
	else if (size > 0)
		res = (char *)malloc(sizeof(char) *
		(ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1)) + 1));
	i = 0;
	index = 0;
	while (index < size - 1)
	{
		ft_strcpy(&res[i], strs[index]);
		i += ft_strlen(strs[index++]);
		ft_strcpy(&res[i], sep);
		i += ft_strlen(sep);
	}
	ft_strcpy(&res[i], strs[index]);
	return (res);
}
