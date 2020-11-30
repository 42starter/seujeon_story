/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:09:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 03:54:54 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_get_data(int fd, char *line)
{
	char			buf[1];
	unsigned int	length;
	unsigned int	res;
	unsigned int	i;

	length = 0;
	res = 0;
	i = 0;
	while (i < MAX_SIZE)
		line[i++] = 0;
	while (res < 16 && (length = ft_read_max(fd, buf, 1)) > 0)
	{
		if (errno != 0)
			return (ERR_READ);
		ft_strncat(line, buf, 1);
		res += length;
	}
	return (res);
}

int		ft_hexdump(int option, char *pre, char *cur, int fd)
{
	unsigned int	count;
	int				temp;
	int				overlap;

	count = 0;
	overlap = 0;
	while ((temp = ft_get_data(fd, cur)) > 0)
	{
		overlap = ft_strcmp(cur, pre) == 0 ? overlap + 1 : 0;
		ft_strncpy(pre, cur, temp);
		if (overlap == 0)
			ft_print_line(count, cur, option);
		else if (overlap == 1)
			ft_putstr("*\n", STD_OUT);
		count += temp;
	}
	if (errno != 0)
	{
		close(fd);
		return (ERR_READ);
	}
	ft_print_head_opt(count, option, 1);
	return (1);
}

int		ft_process(char *file, char *exe, int option)
{
	char			pre[MAX_SIZE + 1];
	char			cur[MAX_SIZE + 1];
	int				fd;

	pre[0] = 0;
	cur[0] = 0;
	if ((fd = ft_open(file)) < 0)
	{
		ft_put_file_err(file, exe);
		return (ERR_FILE);
	}
	if (option && ft_hexdump(option, pre, cur, fd) == ERR_READ)
	{
		ft_put_file_err(file, exe);
		return (ERR_FILE);
	}
	else if (!option && ft_hexdump(option, pre, cur, fd) == ERR_READ)
	{
		ft_put_file_err(file, exe);
		return (ERR_FILE);
	}
	close(fd);
	return (0);
}
