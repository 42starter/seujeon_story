/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:11:25 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:20:07 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_extend_array_nbyte(char *dest, unsigned int n)
{
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(dest) + n + 1))))
		return (0);
	ft_strcpy(res, dest);
	free(dest);
	return (res);
}
