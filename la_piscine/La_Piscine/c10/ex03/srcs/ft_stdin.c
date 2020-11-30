/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:49:20 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:24:09 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_stdin(int option)
{
	char	pre[MAX_SIZE + 1];
	char	cur[MAX_SIZE + 1];

	while (1)
		ft_hexdump(option, pre, cur, STD_IN);
}
