/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:55:37 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 20:57:04 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"
#include "stdio.h"

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	if (!ft_is_valid_op(argv[2]))
		write(1, "0", 1);
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		ft_print_res(a, b, argv[2][0]);
	}
	write(1, "\n", 1);
	return (0);
}
