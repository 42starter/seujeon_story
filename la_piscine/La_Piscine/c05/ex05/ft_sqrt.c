/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:52:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/22 18:10:47 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned long long i;
	unsigned long long nb_fake;

	if (nb < 1)
		return (0);
	nb_fake = (unsigned long long)nb;
	i = 0;
	while (i * i <= nb_fake)
	{
		if (i * i == nb_fake)
			return (i);
		i++;
	}
	return (0);
}
