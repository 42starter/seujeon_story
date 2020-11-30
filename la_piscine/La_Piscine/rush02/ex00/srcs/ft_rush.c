/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:34:17 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:25:37 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "stdio.h"

int		ft_rush(char **strs, char *input)
{
	t_list	*list;
	t_list	*cur;

	list = ft_get_dict_list(strs);
	(void)input;
	cur = list;
	while (cur)
	{
		printf("key: %s	value: %s	size: %d\n",
			cur->key, cur->value, cur->length);
		cur = cur->next;
	}
	return (1);
}
