/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:19:58 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 11:27:18 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int				is_in_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i++] == c)
			return (1);
	}
	return (0);
}

unsigned int	ft_get_row(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 && !is_in_charset(str[i], charset))
			count++;
		else if (i > 0 && is_in_charset(str[i - 1], charset)
					&& !is_in_charset(str[i], charset))
			count++;
		i++;
	}
	return (count);
}

char			*strdup_till_sep(char *str, char *charset, unsigned int *index)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	last;
	char			*res;

	i = *index;
	while (str[i] && is_in_charset(str[i], charset))
		i++;
	start = i;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	last = i;
	if (start == last)
		return (0);
	if (!(res = (char *)malloc(sizeof(char) * (last - start + 1))))
		return (0);
	ft_strncpy(res, &str[start], last - start);
	*index = last;
	return (res);
}

char			**ft_split(char *str, char *charset)
{
	char			**res;
	unsigned int	row;
	unsigned int	i;
	unsigned int	index;

	i = 0;
	while (charset[i])
		i++;
	row = ft_get_row(str, charset);
	if (!(res = (char **)malloc(sizeof(char *) * (row + 1))))
		return (0);
	i = 0;
	index = 0;
	while (i < row)
	{
		if (!(res[i++] = strdup_till_sep(str, charset, &index)))
		{
			ft_free_2d_n_array(res, i - 2);
			return (0);
		}
	}
	res[i] = 0;
	return (res);
}
