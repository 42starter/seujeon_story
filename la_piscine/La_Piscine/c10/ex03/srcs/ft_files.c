/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:14:59 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:16:31 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_open(char *file)
{
	return (open(file, O_RDONLY));
}

int		ft_read_max(int fd, char buf[], int n)
{
	int		length;

	length = read(fd, buf, n);
	if (errno != 0)
		return (ERR_FILE);
	return (length);
}
