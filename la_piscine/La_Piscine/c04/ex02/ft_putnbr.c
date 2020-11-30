/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:40:24 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 20:13:14 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int nb)
{
	char	result[10];
	int		index;
	int		is_negative;
	int		add;

	add = (nb == -2147483648) ? 1 : 0;
	if (add)
		nb = -2147483647;
	is_negative = nb >= 0 ? 0 : 1;
	nb *= is_negative ? -1 : 1;
	index = 9;
	while (nb >= 10)
	{
		result[index] = '0' + nb % 10;
		nb /= 10;
		index--;
	}
	result[index] = '0' + nb % 10;
	if (is_negative)
		write(1, "-", 1);
	if (add)
		result[9] += add;
	write(1, result + index, 10 - index);
}
