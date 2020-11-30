/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:44:41 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:22:10 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_free_list(t_list *list)
{
	t_list	*cur;

	if (!list)
		return ;
	cur = list;
	while (cur->next)
	{
		ft_free_safety(cur->key);
		ft_free_safety(cur->value);
		cur = cur->next;
		free(list);
		list = cur;
	}
	ft_free_safety(cur->key);
	ft_free_safety(cur->value);
	free(cur);
}

void	ft_free_safety(char *str)
{
	if (str)
		free(str);
}

void	ft_free_2d_n_array(char **strs, long n)
{
	long	i;

	i = 0;
	if (n == FLAG_UTILL_NULL)
	{
		while (strs[i])
			free(strs[i++]);
	}
	else
	{
		while (i <= n)
			free(strs[i++]);
	}
	free(strs);
}
