/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:39:01 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/31 16:07:35 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int			get_index_if_is_base(char c, char *base);
int			ft_check_base(char *base);
int			ft_get_base(char *str, char *base);
long long	ft_atoi_base(char *str, char *base);
void		ft_strncpy(char *dest, char *src, unsigned int n);

char		*ft_strndup(char *str, unsigned int n)
{
	char			*res;

	if (!(res = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	if (!str)
	{
		res[n] = 0;
		return (res);
	}
	ft_strncpy(res, str, n);
	return (res);
}

char		*ft_setstr_base(char *str, char *base, int start, int last)
{
	long long	i;

	i = 0;
	while (start + i < last)
	{
		str[start + i] = base[(int)(str[start + i])];
		i++;
	}
	return (str);
}

int			ft_get_count_of_digits(long long nbr, long long k)
{
	long long	count;

	count = 0;
	while (nbr >= k)
	{
		nbr = nbr / k;
		count++;
	}
	count++;
	return (count);
}

char		*ft_getnbr_base(long long nbr, char *base)
{
	char				*digits;
	unsigned int		index;
	long long			k;
	long long			negative_flag;
	long long			length;

	k = 0;
	while (base[k])
		k++;
	negative_flag = nbr < 0 ? 1 : 0;
	nbr *= negative_flag ? -1 : 1;
	length = ft_get_count_of_digits(nbr, k) + negative_flag;
	index = length;
	if (!(digits = ft_strndup(0, index--)))
		return (0);
	while (nbr >= k)
	{
		digits[index--] = nbr % k;
		nbr /= k;
	}
	digits[index] = nbr % k;
	digits = ft_setstr_base(digits, base, index, length);
	if (negative_flag)
		digits[--index] = '-';
	return (digits);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nbr_decimal;
	char		*res;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	nbr_decimal = ft_atoi_base(nbr, base_from);
	res = ft_getnbr_base(nbr_decimal, base_to);
	return (res);
}
