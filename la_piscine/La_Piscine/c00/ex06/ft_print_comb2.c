/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:00:35 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/18 02:15:13 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	set_next_num(char *pre, char *next)
{
	if (pre[1] != '9')
	{
		next[0] = pre[0];
		next[1] = pre[1] + 1;
	}
	else
	{
		next[0] = pre[0] + 1;
		next[1] = '0';
	}
}

int		ft_print_ifnot_max(char *pre)
{
	char	next[2];
	int		flag;

	flag = 0;
	set_next_num(pre, next);
	while (next[0] <= '9')
	{
		if (!flag)
			flag++;
		else
			next[1] = '0';
		while (next[1] <= '9')
		{
			write(1, pre, 2);
			write(1, " ", 1);
			write(1, next, 2);
			if (pre[0] == '9' && pre[1] == '8' &&
			next[0] == '9' && next[1] == '9')
				return (0);
			write(1, ", ", 2);
			next[1]++;
		}
		next[0]++;
	}
	return (1);
}

void	ft_print_comb2(void)
{
	char a[2];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '9')
		{
			if (a[0] == '9' && a[1] == '9')
				return ;
			if (!ft_print_ifnot_max(a))
				return ;
			a[1]++;
		}
		a[0]++;
	}
}
