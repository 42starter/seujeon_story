/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:01:40 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/22 04:57:29 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		return (0);
	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i])
			write(1, argv[argc] + i++, 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
