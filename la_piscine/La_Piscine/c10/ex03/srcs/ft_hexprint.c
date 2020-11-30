/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:59:55 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:24:00 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_printhex(unsigned char c)
{
	ft_putchar("0123456789abcdef"[c / 16], STD_OUT);
	ft_putchar("0123456789abcdef"[c % 16], STD_OUT);
}

void	ft_print_right(char *cur)
{
	int i;

	i = 0;
	ft_putstr("  |", STD_OUT);
	while (cur[i])
	{
		if (cur[i] >= 32 && cur[i] <= 126)
			ft_putchar(cur[i], STD_OUT);
		else
			ft_putchar('.', STD_OUT);
		i++;
	}
	ft_putstr("|", STD_OUT);
}

void	ft_print_line(unsigned int size, char *cur, int option)
{
	ft_print_head_opt(size, option, 0);
	ft_print_hexdump(cur, option);
	if (option)
		ft_print_right(cur);
	ft_putchar('\n', STD_OUT);
}

void	ft_print_hexdump(char *cur, int option)
{
	int i;

	i = 0;
	while (i < 16 && cur[i])
	{
		ft_printhex(cur[i]);
		if (i != 15)
			ft_putchar(' ', STD_OUT);
		if (option && i == 7)
			ft_putchar(' ', STD_OUT);
		i++;
	}
	while (i < 16)
	{
		ft_putstr("  ", STD_OUT);
		if (i != 15)
			ft_putchar(' ', STD_OUT);
		if (option && i == 7)
			ft_putchar(' ', STD_OUT);
		i++;
	}
}

void	ft_print_head_opt(unsigned int size, int option, int is_last)
{
	int		temp;
	int		index;
	char	addr[9];

	temp = 0;
	index = 6 + option;
	addr[7 + option] = 0;
	while (index > -1)
	{
		addr[index--] = "0123456789abcdef"[size % 16];
		size /= 16;
	}
	ft_putstr(addr, STD_OUT);
	if (option && !is_last)
		ft_putstr("  ", STD_OUT);
	else if (!is_last)
		ft_putstr(" ", STD_OUT);
	if (is_last)
		ft_putchar('\n', STD_OUT);
}
