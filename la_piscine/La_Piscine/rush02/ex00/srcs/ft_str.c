/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:48:06 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:21:37 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = 0;
}

char	*ft_strdup(char *str)
{
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	ft_strcpy(res, str);
	return (res);
}
