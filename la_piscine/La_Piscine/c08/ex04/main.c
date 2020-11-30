/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:32:11 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/23 21:41:19 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

typedef struct  s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}               t_stock_str;

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int     main(int ac, char **av)
{
    t_stock_str *a;

    a = ft_strs_to_tab(ac, av);
    while (a->size != 0)
    {
		printf("%d\n", a->size);
		a++;
    }
    return (0);
}