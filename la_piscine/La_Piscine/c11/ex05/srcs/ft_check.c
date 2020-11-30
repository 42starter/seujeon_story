/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_res.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:24:20 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 20:58:00 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int		ft_check_op(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '/')
		return (4);
	else if (c == '%')
		return (5);
	return (0);
}
