/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:22:07 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 07:02:26 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

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

void	ft_put_file_err(char *file, char *exe)
{
	ft_putstr(basename(exe), STD_ERR);
	ft_putstr(": ", STD_ERR);
	ft_putstr(file, STD_ERR);
	ft_putstr(": ", STD_ERR);
	ft_putstr(strerror(errno), STD_ERR);
	ft_putstr("\n", STD_ERR);
	errno = 0;
}
