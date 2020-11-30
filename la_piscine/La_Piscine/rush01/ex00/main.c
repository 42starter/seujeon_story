/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 22:09:35 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/25 18:31:45 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		is_valid_argv(char *str, int *n)
{
	int		i;
	int		num_count;

	i = 0;
	num_count = 0;
	while (str[i])
	{
		if (i == 0 && is_numeric(str[i]))
			num_count++;
		else if (i > 0 && str[i - 1] == ' ' && is_numeric(str[i]))
			num_count++;
		else if (!is_numeric(str[i]) && str[i] != ' ')
			return (FALSE);
		i++;
	}
	if (*n == num_count / 4)
		return (TRUE);
	return (FALSE);
}

int		pars_argv(char *str, int *n)
{
	int		i;
	int		num_count;

	i = 0;
	num_count = 0;
	while (str[i])
	{
		if (is_numeric(str[i++]))
			num_count++;
	}
	if ((*n = num_count / 4))
	{
		if (num_count % 4 != 0)
			return (FALSE);
	}
	else
		return (FALSE);
	if (is_valid_argv(str, n))
		return (TRUE);
	return (FALSE);
}

void	print_2d_array(int **array, int n)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			c = array[i][j] + '0';
			write(1, &c, 1);
			if (j++ != n)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		n;
	int		**grid;
	int		**map;

	if (argc != 2)
		write(1, "Error\n", 6);
	else if (!pars_argv(argv[1], &n))
		write(1, "Error\n", 6);
	else
	{
		grid = init_grid(n, argv[1]);
		map = init_map(n);
		if (grid && map && progress(map, grid, n))
			print_2d_array(map, n);
		else
			write(1, "Error\n", 6);
		ft_free(map, grid, n);
	}
	return (0);
}
