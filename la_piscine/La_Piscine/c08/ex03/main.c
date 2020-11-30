/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 00:48:48 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/23 01:12:23 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include "stdio.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(int argc, char **argv)
{
	t_point		point;

	(void)argc;
	(void)argv;
	set_point(&point);
	printf("x:%d	y:%d\n", point.x, point.y);
	return (0);
}
