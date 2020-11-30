/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 22:04:59 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 18:30:30 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_free_2d_array(int **array, int n)
{
	int i;

	i = 1;
	while (i <= n)
		free(array[i++]);
	free(array);
}

void	ft_free(int **map, int **grid, int n)
{
	if (map)
		ft_free_2d_array(map, n);
	if (grid)
		ft_free_2d_array(grid, 4);
}
