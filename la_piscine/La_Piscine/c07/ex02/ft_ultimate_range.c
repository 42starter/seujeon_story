/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:26:22 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 21:54:54 by seujeon          ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = ft_range(min, max)))
		return (-1);
	return (max - min);
}
