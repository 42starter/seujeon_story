/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:59:29 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 00:27:10 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' || c == '\n'
		|| c == '\f' || c == '\v')
		return (1);
	return (0);
}

int		is_printable_ifn_num(char c)
{
	if (!is_numeric(c) && (c >= 32 && c <= 126))
		return (1);
	return (0);
}

int		is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_only_numeric(char *str)
{
	int i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '0')
			flag = 1;
		if (flag && i > 0)
			return (0);
		if (!is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_valid_input(char *input)
{
	if (is_only_numeric(input))
		return (1);
	return (0);
}
