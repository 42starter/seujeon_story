/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:08:54 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 07:02:04 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int i;
	int res;

	if (argc < 2)
		ft_stdin();
	else
	{
		i = 1;
		while (i < argc)
		{
			if ((res = ft_cat(argv[i])) <= 0)
				ft_put_file_err(argv[i], argv[0]);
			i++;
		}
	}
	return (0);
}
