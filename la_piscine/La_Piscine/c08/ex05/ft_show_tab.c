/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:02:58 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 05:02:54 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putint(long long n)
{
	int		i;
	char	num[12];
	int		is_negative;

	num[11] = 0;
	i = 10;
	is_negative = n >= 0 ? 0 : 1;
	while (n >= 10)
	{
		num[i--] = n % 10 + '0';
		n /= 10;
	}
	num[i] = n % 10 + '0';
	if (is_negative)
		num[--i] = '-';
	ft_putstr(num + i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putint(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}