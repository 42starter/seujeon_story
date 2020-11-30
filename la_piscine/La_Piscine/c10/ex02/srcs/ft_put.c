/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:22:07 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/28 18:44:39 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	while (*str)
		ft_putchar(*str++, fd);
}

void	ft_putnstr(char *str, unsigned int n, int fd)
{
	while (n-- && *str)
		ft_putchar(*str++, fd);
}
