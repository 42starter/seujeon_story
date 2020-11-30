/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:49:28 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/24 23:54:38 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int i;

	if (argc <= 1)
		return (0);
	i = ft_atoi(argv[1]);
	printf("%d\n", i);
	i = ft_atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}