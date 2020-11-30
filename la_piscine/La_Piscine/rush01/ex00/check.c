/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 22:09:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 18:31:38 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_row_left(int **map, int **grid, int cur_row, int n)
{
	int i;
	int seen;
	int count;

	i = 2;
	count = 1;
	seen = map[cur_row][1];
	while (i <= n)
	{
		if (map[cur_row][i] == 0 || seen == 0)
			return (TRUE);
		if (seen < map[cur_row][i])
		{
			seen = map[cur_row][i];
			count++;
		}
		if (count > grid[LEFT][cur_row])
			return (FALSE);
		i++;
	}
	if (grid[LEFT][cur_row] == count)
		return (TRUE);
	return (FALSE);
}

int		check_row_right(int **map, int **grid, int cur_row, int n)
{
	int i;
	int seen;
	int count;

	i = n - 1;
	count = 1;
	seen = map[cur_row][n];
	while (i >= 1)
	{
		if (map[cur_row][i] == 0 || seen == 0)
			return (TRUE);
		if (seen < map[cur_row][i])
		{
			seen = map[cur_row][i];
			count++;
		}
		if (count > grid[RIGHT][cur_row])
			return (FALSE);
		i--;
	}
	if (grid[RIGHT][cur_row] == count)
		return (TRUE);
	return (FALSE);
}

int		check_column_up(int **map, int **grid, int cur_column, int n)
{
	int i;
	int seen;
	int count;

	i = 2;
	count = 1;
	seen = map[1][cur_column];
	while (i <= n)
	{
		if (map[i][cur_column] == 0 || seen == 0)
			return (TRUE);
		if (seen < map[i][cur_column])
		{
			seen = map[i][cur_column];
			count++;
		}
		if (count > grid[UP][cur_column])
			return (FALSE);
		i++;
	}
	if (grid[UP][cur_column] == count)
		return (TRUE);
	return (FALSE);
}

int		check_column_down(int **map, int **grid, int cur_column, int n)
{
	int i;
	int seen;
	int count;

	i = n - 1;
	count = 1;
	seen = map[n][cur_column];
	while (i >= 1)
	{
		if (map[i][cur_column] == 0 || seen == 0)
			return (TRUE);
		if (seen < map[i][cur_column] && map[i][cur_column] != 0)
		{
			seen = map[i][cur_column];
			count++;
		}
		if (count > grid[DOWN][cur_column])
			return (FALSE);
		i--;
	}
	if (grid[DOWN][cur_column] == count)
		return (TRUE);
	return (FALSE);
}

int		check_grid_with_map(int **map, int **grid, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (!check_row_left(map, grid, i, n)
		|| !check_row_right(map, grid, i, n)
		|| !check_column_up(map, grid, i, n)
		|| !check_column_down(map, grid, i, n))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
