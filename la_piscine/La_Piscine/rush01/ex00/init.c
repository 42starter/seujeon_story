/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 22:05:13 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 21:24:44 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		*get_valid_grid(char *str, int *index, int n)
{
	int		j;
	int		*res;

	if (!(res = (int *)malloc(sizeof(int) * (n + 1))))
		return (0);
	j = 1;
	while (j <= n)
	{
		while (!is_numeric(str[*index]))
			(*index)++;
		if (!is_below_n(n, str[*index]))
		{
			free(res);
			return (0);
		}
		res[j++] = str[(*index)++] - '0';
	}
	return (res);
}

int		**init_grid(int n, char *str)
{
	int		**res;
	int		i;
	int		index;

	if (!(res = (int **)malloc(sizeof(int *) * (5))))
		return (0);
	i = 1;
	index = 0;
	while (i <= 4)
	{
		if (!(res[i] = get_valid_grid(str, &index, n)))
		{
			ft_free_2d_array(res, i - 1);
			return (0);
		}
		i++;
	}
	return (res);
}

int		**init_map(int n)
{
	int	**res;
	int i;
	int j;

	if (!(res = (int **)malloc(sizeof(int *) * (n + 1))))
		return (0);
	i = 1;
	while (i <= n)
	{
		if (!(res[i] = (int *)malloc(sizeof(int) * (n + 1))))
		{
			ft_free_2d_array(res, i - 1);
			return (0);
		}
		j = 1;
		while (j <= n)
			res[i][j++] = 0;
		i++;
	}
	return (res);
}
