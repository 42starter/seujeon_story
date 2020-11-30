/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:00:19 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:20:28 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_check_key(char *str, int *col)
{
	int		flag;

	flag = 0;
	while (is_numeric(str[*col]))
	{
		if (*col == 0 && str[*col] == '0')
			flag = 1;
		if (flag && *col > 0)
			return (0);
		(*col)++;
	}
	return (1);
}

int		ft_check_value(char *str, int *col)
{
	int len;

	len = ft_strlen(str);
	while (*col < len && is_space(str[*col]))
		(*col)++;
	if (*col >= len || str[*col] != ':')
		return (0);
	(*col)++;
	while (*col < len && is_space(str[*col]))
		(*col)++;
	while (*col < len && is_printable(str[*col]))
		(*col)++;
	if (*col != len)
		return (0);
	return (1);
}

int		ft_check_dict(char **strs)
{
	int		i;
	int		j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		if (ft_check_key(strs[i], &j) == 0)
			return (0);
		if (ft_check_value(strs[i], &j) == 0)
			return (0);
		i++;
	}
	return (1);
}
