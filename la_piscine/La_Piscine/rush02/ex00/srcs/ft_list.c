/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:48:22 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:21:09 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_list	*ft_create_list(char *key, char *value)
{
	t_list	*res;

	if (!key || !value)
	{
		ft_free_safety(key);
		ft_free_safety(value);
		return (0);
	}
	if (!(res = (t_list *)malloc(sizeof(t_list) * 1)))
		return (0);
	res->length = ft_strlen(key);
	res->key = ft_strdup(key);
	res->value = ft_strdup(value);
	res->next = 0;
	res->pre = 0;
	return (res);
}

void	ft_add_list(t_list **start, t_list *new)
{
	t_list	*cur;

	if (!*start)
		*start = new;
	else
	{
		cur = *start;
		while (cur->next)
			cur = cur->next;
		cur->next = new;
		new->pre = cur;
	}
}

t_list	*ft_get_dict_list(char **strs)
{
	t_list	*res;
	t_list	*start;
	int		i;

	i = 0;
	start = 0;
	while (strs[i])
	{
		if (!(res = ft_create_list(ft_get_key(strs[i]),
									ft_get_value(strs[i]))))
		{
			ft_free_list(start);
			return (0);
		}
		ft_add_list(&start, res);
		i++;
	}
	return (start);
}
