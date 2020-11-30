/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:31:02 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:21:14 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_process_default(argv[1]);
	else if (argc == 3)
		ft_process(argv[1], argv[2]);
	else
		write(STD_OUT, "Error\n", 6);
	return (0);
}
