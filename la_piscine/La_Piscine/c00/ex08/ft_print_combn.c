/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:02:14 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/15 23:47:26 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int		is_last(int start, int last, char *numbers)
{
	char	temp[10];
	int		i;

	i = start;
	while (i < last)
	{
		temp[i] = i + '0';
		i++;
	}
	while (start < last)
	{
		if (temp[start] != numbers[start])
			return (0);
		start++;
	}
	return (1);
}

void	ft_print_rec(int depth, int last, int start, char *numbers)
{
	if (depth == last)
	{
		write(1, numbers + start, last - start);
		if (!is_last(start, last, numbers))
			write(1, ", ", 2);
		return ;
	}
	if (depth != start)
		numbers[depth] = numbers[depth - 1] + 1;
	while (numbers[depth] <= depth + '0')
	{
		ft_print_rec(depth + 1, last, start, numbers);
		numbers[depth]++;
	}
}

void	ft_print_combn(int n)
{
	char	b[10];
	int		i;
	int		index;

	if (n < 0 && n > 9)
		return ;
	index = 0;
	i = 10 - n;
	while (i <= 9)
	{
		b[i] = '0' + index++;
		i++;
	}
	ft_print_rec(10 - n, 10, 10 - n, b);
}
