/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:54:04 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 10:54:20 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_n_numbers(char *numbers, int n)
{
	int i;

	i = 0;
	while (i < n)
		write(1, &numbers[i++], 1);
}

void	ft_set_map(int map[10][10], int column, int row, int value)
{
	int x;
	int y;
	int y_down;

	x = column;
	y = row;
	y_down = row;
	while (x < 10)
	{
		map[row][x] += value;
		if (y > -1)
			map[y--][x] += value;
		if (y_down < 10)
			map[y_down++][x] += value;
		x++;
	}
}

void	ft_rec_set_queen(int map[10][10], char *numbers, int column, int *count)
{
	int y;

	if (column == 10)
	{
		*count = *count + 1;
		ft_print_n_numbers(numbers, 10);
		write(1, "\n", 1);
		return ;
	}
	y = 0;
	while (y < 10)
	{
		if (map[y][column] == 0)
		{
			numbers[column] = y + '0';
			ft_set_map(map, column, y, 1);
			ft_rec_set_queen(map, numbers, column + 1, count);
			ft_set_map(map, column, y, -1);
		}
		y++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	char	queens[10];
	int		map[10][10];
	int		x;
	int		y;
	int		count;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			map[y][x] = 0;
			x++;
		}
		queens[y] = 0;
		y++;
	}
	count = 0;
	ft_rec_set_queen(map, queens, 0, &count);
	return (count);
}
