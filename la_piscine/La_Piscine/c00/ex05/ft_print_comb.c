/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:35:26 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/18 02:15:10 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0' - 1;
	a[1] = '1' - 1;
	a[2] = '2' - 1;
	while (++a[0] <= '7')
	{
		a[1] = a[0];
		while (++a[1] <= '8')
		{
			a[2] = a[1];
			while (++a[2] <= '9')
			{
				write(1, a, 3);
				if (a[0] == '7' && a[1] == '8' && a[2] == '9')
					return ;
				write(1, ", ", 2);
			}
		}
	}
}