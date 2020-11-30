/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:45:37 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:21:25 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "stdio.h"

int		ft_open(char *file)
{
	return (open(file, O_RDONLY));
}

char	*ft_read_all(int fd)
{
	unsigned int	length;
	char			buf[READ_SIZE];
	char			*temp;
	char			*pre;

	if (!(temp = (char *)malloc(sizeof(char) * (READ_SIZE + 1))))
		return (0);
	temp[0] = 0;
	while ((length = read(fd, buf, READ_SIZE)) > 0)
	{
		ft_strncat(temp, buf, length);
		if (length == READ_SIZE)
		{
			pre = temp;
			if (!(temp = ft_extend_array_nbyte(temp, length)))
			{
				free(pre);
				return (0);
			}
		}
	}
	return (temp);
}
