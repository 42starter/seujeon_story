/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:58:45 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 00:58:59 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_get_map(int fd)
{
	char	*first;
	t_ull	*map;

	if (!ft_read_str_line(fd))
		return (0);
	if ()
}

void	ft_process(char *file)
{
	int fd;

	if ((fd = ft_open(fd)) < 0)
		return (0);

}