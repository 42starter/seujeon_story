/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:30:01 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:24:27 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_start(int argc, char **argv, int option)
{
	int i;

	i = 1 + option;
	while (i < argc)
	{
		ft_process(argv[i], argv[0], option);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		option;

	option = 0;
	if (argc < 2)
	{
		ft_stdin(option);
		return (0);
	}
	if (ft_strcmp("-C", argv[1]) == 0)
		option = 1;
	if (option && argc == 2)
	{
		ft_stdin(option);
		return (0);
	}
	ft_start(argc, argv, option);
	return (0);
}
