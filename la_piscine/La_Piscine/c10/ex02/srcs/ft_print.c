/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:27:39 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:53:28 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_print_header(char *file, int index, int do_newline)
{
	if (index != 3 && do_newline)
		ft_putchar('\n', STD_OUT);
	ft_putstr("==> ", STD_OUT);
	ft_putstr(file, STD_OUT);
	ft_putstr(" <==\n", STD_OUT);
}

void	ft_print_all_of_fd(int fd)
{
	int		length;
	char	buf[MAX_SIZE];

	length = 0;
	while ((length = ft_read_max(fd, buf, MAX_SIZE)) > 0)
	{
		if (errno != 0)
			return ;
		write(STD_OUT, buf, MAX_SIZE);
	}
	close(fd);
}

void	ft_print_all_of_file(char *file)
{
	int		fd;
	int		length;
	char	buf[MAX_SIZE];

	if (!((fd = ft_open(file)) > 0))
		return ;
	length = 0;
	while ((length = ft_read_max(fd, buf, MAX_SIZE)) > 0)
	{
		if (errno != 0)
			break ;
		write(STD_OUT, buf, MAX_SIZE);
	}
	close(fd);
}

void	ft_print_n_bytes(char *file, int n)
{
	int		fd;
	int		length;
	int		res;
	char	buf[MAX_SIZE];

	if (!((fd = ft_open(file)) > 0))
		return ;
	length = 0;
	res = 0;
	while ((length = ft_read_max(fd, buf, MAX_SIZE)) > 0)
	{
		if (errno != 0)
		{
			close(fd);
			return ;
		}
		if ((res += length) >= n)
			break ;
	}
	ft_print_all_of_fd(fd);
	close(fd);
}
