/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplication.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 23:31:38 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 16:25:39 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_duplication_column(int **map, int cur_row, int cur_column, int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (cur_row == i)
		{
			i++;
			continue ;
		}
		if (map[i][cur_column] == map[cur_row][cur_column])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int		is_duplication_row(int **map, int cur_row, int cur_column, int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (cur_column == i)
		{
			i++;
			continue ;
		}
		if (map[cur_row][i] == map[cur_row][cur_column])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

int		is_duplication(int **map, int cur_row, int cur_column, int n)
{
	if (is_duplication_column(map, cur_row, cur_column, n)
	|| is_duplication_row(map, cur_row, cur_column, n))
		return (TRUE);
	return (FALSE);
}
