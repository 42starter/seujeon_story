/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:16:44 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:54:13 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(int argc, char **argv)
{
	int		n;
	int		i;

	if (argc < 2)
	{
		ft_stdin();
		return (0);
	}
	if ((n = ft_pars_argv(argc, argv)) == ERR_OPTION &&
		ft_strcmp("-c", argv[1]) == 0)
		ft_put_argv_err(argv[2], argv[0]);
	else if (n == ERR_OPTION)
		ft_put_argv_err(argv[1], argv[0]);
	else if (argc < 4)
		ft_stdin();
	else
	{
		i = 3;
		while (i < argc)
		{
			ft_tail(argv, n, argc, i);
			i++;
		}
	}
	return (0);
}
