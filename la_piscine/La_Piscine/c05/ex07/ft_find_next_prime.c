/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:53:10 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 16:03:41 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_max_sqrt(unsigned int nb)
{
	unsigned int i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int		ft_find_next_prime(int nb)
{
	int	sqrt;
	int	i;
	int count;

	if (nb <= 2)
		return (2);
	while (1)
	{
		sqrt = ft_max_sqrt((unsigned int)nb);
		count = 0;
		i = 2;
		while (i <= sqrt)
		{
			if (nb % i++ == 0)
				count++;
			if (count > 0)
				break ;
		}
		if (count == 0)
			break ;
		nb++;
	}
	return (nb);
}
