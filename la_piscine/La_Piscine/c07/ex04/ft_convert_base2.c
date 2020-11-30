/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:39:09 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/31 16:09:40 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

int			get_index_if_is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int			ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
		|| base[i] == '\t' || base[i] == '\r' || base[i] == '\f'
		|| base[i] == '\v' || base[i] == '\n')
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

int			ft_get_base(char *str, char *base)
{
	int base_index;
	int res;
	int len;
	int	i;

	len = 0;
	while (base[len])
		len++;
	base_index = get_index_if_is_base(str[0], base);
	if (base_index < 0)
		return (0);
	res = 1;
	i = 0;
	while (str[i] && get_index_if_is_base(str[i], base) >= 0)
		i++;
	while (i - 1 > 0)
	{
		res *= len;
		i--;
	}
	return (res * base_index);
}

long long	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	int				negative_flag;
	long long		res;

	i = 0;
	res = 0;
	negative_flag = 1;
	if (!ft_check_base(base))
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\n')
		i++;
	while (str[i] == '+' || str[i] == '-')
		negative_flag *= str[i++] == '-' ? -1 : 1;
	while (str[i] && get_index_if_is_base(str[i], base) >= 0)
		res += ft_get_base(str + i++, base);
	return ((res += ft_get_base(str + i, base)) * negative_flag);
}
