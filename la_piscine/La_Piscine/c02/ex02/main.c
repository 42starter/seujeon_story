/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:58:25 by sw                #+#    #+#             */
/*   Updated: 2020/10/16 01:03:56 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int		ft_str_is_alpha(char *str);

int		main(void)
{
	printf("%d\n",ft_str_is_alpha("helloword1"));
	printf("%d\n",ft_str_is_alpha("helloworda"));
	printf("%d\n",ft_str_is_alpha("hellow_ord"));
	printf("%d\n",ft_str_is_alpha("hello1wor\nd1"));
}
