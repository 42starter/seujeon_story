/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:53:02 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/22 18:10:51 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max_sqrt(unsigned long long nb)
{
	unsigned long long i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			break ;
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	unsigned long long	i;
	unsigned long long	nb_fake;
	int					count;
	unsigned long long	sqrt;

	i = 2;
	count = 0;
	if (nb <= 1)
		return (0);
	nb_fake = (unsigned long long)nb;
	sqrt = ft_max_sqrt(nb_fake);
	while (i <= sqrt)
	{
		if (nb_fake % i == 0 && nb_fake != i)
			count++;
		if (count > 0)
			return (0);
		i++;
	}
	return (1);
}
