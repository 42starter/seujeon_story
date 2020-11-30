/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:42:22 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:56:58 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		main(int argc, char **argv)
{
	(void)argc;
	if (argc < 0)
		write(1, ERROR_NO_ARGV, 20);
	if (argc > 2)
		write(1, ERROR_TOO_MANY_ARGV, 21);
	else
	{
		if (!ft_display(argv[1]))
			write(1, ERROR_CANT_READ, 19);
	}
	return (0);
}
