/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:50:52 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 14:00:50 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int			ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[j++] == base[i])
				return (0);
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void		ft_putstr_base(char *str, char *base, int start)
{
	while (str[start] && start < 10)
		write(1, &base[(unsigned int)str[start++] - 1], 1);
}

int			ft_check_add(int *nbr)
{
	if (*nbr == -2147483648)
	{
		*nbr = *nbr + 1;
		return (1);
	}
	return (0);
}

int			ft_check_negative(int *nbr)
{
	if (*nbr < 0)
	{
		*nbr *= -1;
		return (1);
	}
	else
		return (0);
}

void		ft_putnbr_base(int nbr, char *base)
{
	char	number[10];
	int		i;
	int		k;
	int		add_flag;
	int		negative_flag;

	k = 0;
	while (base[k])
		k++;
	add_flag = ft_check_add(&nbr);
	negative_flag = ft_check_negative(&nbr);
	i = 9;
	if (!ft_check_base(base))
		return ;
	while (nbr >= k)
	{
		number[i--] = nbr % k + 1;
		nbr /= k;
	}
	number[i] = nbr % k + 1;
	if (add_flag)
		number[9] += 1;
	if (negative_flag)
		write(1, "-", 1);
	ft_putstr_base(number, base, i);
}
