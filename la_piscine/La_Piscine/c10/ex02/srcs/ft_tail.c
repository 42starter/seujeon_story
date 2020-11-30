/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:17:11 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:53:49 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int			ft_filelen(char *file)
{
	char	buf[MAX_SIZE];
	int		length;
	int		res;
	int		fd;

	res = 0;
	if ((fd = ft_open(file)) < 0)
		return (ERR_FILE);
	errno = 0;
	while ((length = ft_read_max(fd, buf, MAX_SIZE)) > 0)
		res += length;
	close(fd);
	if (length == ERR_FILE)
		return (ERR_FILE);
	return (res);
}

int			ft_process(int n, char **argv, int argc, int index)
{
	int		file_size;
	int		do_newline;

	do_newline = 0;
	if ((file_size = ft_filelen(argv[index])) == ERR_FILE)
	{
		do_newline = errno == 0 ? 1 : 0;
		ft_put_file_err(argv[index], argv[0]);
		return (ERR_FILE);
	}
	if (argc != 4)
		ft_print_header(argv[index], index, do_newline);
	if (file_size <= n)
		ft_print_all_of_file(argv[index]);
	else
		ft_print_n_bytes(argv[index], file_size - n);
	return (1);
}

void		ft_tail(char **argv, int n, int argc, int index)
{
	if (ft_process(n, argv, argc, index) != ERR_FILE && argc > 4)
		ft_putchar('\n', STD_OUT);
}
