/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 22:54:32 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/22 03:28:06 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void		ft_print_address(unsigned long long memory_value)
{
	char				address[16];
	int					i;

	i = 0;
	while (i < 16)
		address[i++] = '0';
	i = 15;
	while (memory_value >= 16 && i > 0)
	{
		address[i--] = "0123456789abcdef"[memory_value % 16];
		memory_value = memory_value / 16;
	}
	address[i] = "0123456789abcdef"[memory_value % 16];
	write(1, address, 16);
	write(1, ":", 1);
}

void		ft_print_hex(unsigned char c)
{
	int rest;
	int cut;

	cut = c / 16;
	rest = c % 16;
	write(1, &"0123456789abcdef"[cut], 1);
	write(1, &"0123456789abcdef"[rest], 1);
}

void		ft_putnstr(char *str, int size)
{
	int i;

	i = 0;
	write(1, " ", 1);
	while (i < size)
	{
		if (*(str + i) >= 32 && *(str + i) != 127)
			write(1, str + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void		ft_putnhex(int n, void *addr)
{
	int index;

	index = 0;
	while (index < n)
	{
		if (index % 2 == 0)
			write(1, " ", 1);
		ft_print_hex(*(unsigned char *)(addr + index++));
	}
	while (index < 16)
	{
		if (index % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		index++;
	}
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	void			*res;

	res = addr;
	if (size == 0)
		return (addr);
	while (size >= 16)
	{
		ft_print_address((unsigned long long)addr);
		ft_putnhex(16, addr);
		ft_putnstr(addr, 16);
		addr += 16;
		size -= 16;
	}
	if (size != 16 && size < 16)
	{
		ft_print_address((unsigned long long)addr);
		ft_putnhex(size, addr);
		ft_putnstr(addr, size);
	}
	return (res);
}
