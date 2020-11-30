/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 04:28:51 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:57:24 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		ft_display(char *file)
{
	int		fd;
	int		length;
	char	buf[1024];

	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	while ((length = read(fd, buf, 1)))
		write(1, buf, length);
	close(fd);
	return (fd);
}
