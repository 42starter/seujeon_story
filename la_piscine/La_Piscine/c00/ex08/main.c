/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 23:07:02 by sw                #+#    #+#             */
/*   Updated: 2020/10/15 23:43:42 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_combn(int);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	//printf("%d %s", argc, argv[0]);

	while (i < argc)
	{
		ft_print_combn(argv[i++][0] - '0');
	}
	return (0);

}