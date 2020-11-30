/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:56:21 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/22 05:25:56 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		*ft_range(int min, int max)
{
	int i;
	int *new;
	int start;

	if (min >= max)
		return (0);
	if (!(new = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	start = min;
	while (min < max)
		new[i++] = min++;
	return (new);
}
