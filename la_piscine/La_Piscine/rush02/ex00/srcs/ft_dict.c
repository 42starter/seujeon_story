/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 23:09:03 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:25:42 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_get_value(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	while (is_numeric(str[i]) || is_space(str[i]) || str[i] == ':')
		i++;
	len = ft_strlen(str + i);
	if (!(res = ft_strndup(str + i, len)))
		return (0);
	return (res);
}

char	*ft_get_key(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (is_numeric(str[i]))
		i++;
	if (!(res = ft_strndup(str, i)))
		return (0);
	return (res);
}

char	*ft_get_dict(char *file)
{
	char	*res;
	int		fd;

	if ((fd = ft_open(file)) < 0)
	{
		ft_putstr(ERR_OPEN);
		return (0);
	}
	if (!(res = ft_read_all(fd)))
	{
		ft_putstr(ERR_READ);
		return (0);
	}
	return (res);
}
