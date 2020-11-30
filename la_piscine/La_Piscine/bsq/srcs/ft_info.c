/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:08:01 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 00:30:42 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_setinfo(t_read_info *info)
{
	info->length = 0;
	info->cur_size = 0;
	info->total = 0;
	info->buf[0] = 0;
}

void	ft_set_readline(char **res, t_bool *flag, int *count)
{
	*res = 0;
	*flag = 0;
	*count = 0;
}