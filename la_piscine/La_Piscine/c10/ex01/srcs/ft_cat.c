/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:23:22 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:57:07 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_cat(char *file)
{
	int		fd;
	int		length;
	char	buf[MAX_SIZE];

	if ((fd = ft_open(file)) < 0)
		return (ERR_FILE);
	while ((length = ft_read_max(fd, buf)) > 0)
		ft_putnstr(buf, length, STD_OUT);
	close(fd);
	if (length < 0)
		return (ERR_READ);
	return (TRUE);
}
