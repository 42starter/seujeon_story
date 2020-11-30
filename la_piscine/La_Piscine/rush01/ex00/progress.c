/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   progress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 22:05:03 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 18:29:16 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		rec_dfs(int **map, int **grid, int n, int offset)
{
	int i;

	if (offset >= n * n)
	{
		if (check_grid_with_map(map, grid, n))
			return (TRUE);
		else
			return (FALSE);
	}
	i = 1;
	while (i <= n)
	{
		map[offset / n + 1][offset % n + 1] = i++;
		if (!is_duplication(map, offset / n + 1, offset % n + 1, n)
				&& check_grid_with_map(map, grid, n)
				&& rec_dfs(map, grid, n, offset + 1))
			return (TRUE);
	}
	map[offset / n + 1][offset % n + 1] = 0;
	return (FALSE);
}

int		progress(int **map, int **grid, int n)
{
	return (rec_dfs(map, grid, n, 0));
}
