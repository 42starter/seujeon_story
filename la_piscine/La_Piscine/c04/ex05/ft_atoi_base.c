/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:20:02 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/27 04:32:35 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			is_char_of_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int			ft_get_base_index(char c, char *base)
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
	int			base_index;
	long long	res;
	int			len;
	int			i;

	len = 0;
	while (base[len])
		len++;
	base_index = ft_get_base_index(str[0], base);
	if (base_index < 0)
		return (0);
	res = 1;
	i = 0;
	while (str[i] && is_char_of_base(str[i], base))
		i++;
	while (i - 1 > 0)
	{
		res *= len;
		i--;
	}
	return (res * base_index);
}

int			ft_atoi_base(char *str, char *base)
{
	int			i;
	int			negative_flag;
	int			res;
	int			start;

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
	start = i;
	while (str[i] && is_char_of_base(str[i], base))
	{
		res += ft_get_base(str + i, base);
		i++;
	}
	return ((res += ft_get_base(str + i, base)) * negative_flag);
}
