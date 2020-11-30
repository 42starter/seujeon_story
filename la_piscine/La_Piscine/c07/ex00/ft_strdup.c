/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:36:27 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 21:54:58 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new;
	char *dest;

	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	dest = new;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (new);
}
