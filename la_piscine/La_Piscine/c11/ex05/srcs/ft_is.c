/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:10:58 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 20:52:12 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_is_valid_op(char *op)
{
	char	*start;
	int		i;
	char	c;

	i = 0;
	start = op;
	while (*op)
	{
		i++;
		op++;
		if (i > 2)
			return (0);
	}
	c = *start;
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}
