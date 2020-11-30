/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:31:42 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 21:03:55 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"
#include "stdio.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(long long c)
{
	int		is_negative;
	int		index;
	char	a[12];

	index = 10;
	a[11] = 0;
	is_negative = c >= 0 ? 0 : 1;
	c = is_negative ? c * -1 : c;
	if (is_negative)
		write(1, "-", 1);
	while (c >= 10)
	{
		a[index--] = c % 10 + '0';
		c /= 10;
	}
	a[index] = c % 10 + '0';
	ft_putstr(a + index);
}

void	ft_print_res(int a, int b, char op)
{
	int		op_res;

	op_res = ft_check_op(op);
	if (b == 0 && op_res == 4)
		ft_putstr(ERR_DV_ZERO);
	else if (b == 0 && op_res == 5)
		ft_putstr(ERR_MD_ZERO);
	else if (op_res == 1)
		ft_putnbr(a + b);
	else if (op_res == 2)
		ft_putnbr(a - b);
	else if (op_res == 3)
		ft_putnbr(a * b);
	else if (op_res == 4)
		ft_putnbr(a / b);
	else if (op_res == 5)
		ft_putnbr(a % b);
}
