/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 15:44:03 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 09:25:59 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

typedef struct  s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}               t_stock_str;

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int					get_len_str_array(char **strs)
{
	int i;
	int count;

	count = 0;
	while (*strs)
	{
		i = ft_strlen(*strs++);
		count += i;
	}
	return (count);
}

char				*ft_strdup(char *str)
{
	int     i;
	char    *res;

	i = ft_strlen(str);
	if (!(res = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					index;

	index = 0;
	if (!(res = (struct s_stock_str *)malloc(
		sizeof(struct s_stock_str) * (ac + 1))))
		return (0);
	while (index < ac)
	{
		res[index].size = ft_strlen(av[index]);
		res[index].str = av[index];
		res[index].copy = ft_strdup(av[index]);
		index++;
	}
	res[index].size = 0;
	res[index].str = 0;
	res[index].copy = 0;
	return (res);
}