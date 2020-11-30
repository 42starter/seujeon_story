/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:39:37 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:26:21 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_put_file_err(char *file, char *exe)
{
	ft_putstr(basename(exe), STD_ERR);
	ft_putstr(": ", STD_ERR);
	ft_putstr(file, STD_ERR);
	ft_putstr(": ", STD_ERR);
	ft_putstr(strerror(errno), STD_ERR);
	ft_putchar('\n', STD_ERR);
	errno = 0;
}

void	ft_put_argv_err(char *offset, char *exe)
{
	ft_putstr(basename(exe), STD_ERR);
	ft_putstr(": ", STD_ERR);
	ft_putstr(strerror(errno), STD_ERR);
	ft_putstr(" -- ", STD_ERR);
	ft_putstr(offset, STD_ERR);
	ft_putchar('\n', STD_ERR);
}
