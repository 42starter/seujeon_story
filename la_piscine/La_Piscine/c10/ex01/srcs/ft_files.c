/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:14:59 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/28 09:29:29 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_open(char *file)
{
	return (open(file, O_RDONLY));
}

int		ft_read_max(int fd, char buf[MAX_SIZE])
{
	int		length;

	length = read(fd, buf, MAX_SIZE);
	if (errno != 0)
		return (-1);
	return (length);
}
