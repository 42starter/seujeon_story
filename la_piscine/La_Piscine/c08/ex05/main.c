/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:32:11 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 09:23:58 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_stock_str
{
    int     size;
    char    *str;
    char    *copy;
}               t_stock_str;

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

int     main(int ac, char **av)
{
    t_stock_str *a;

    a = ft_strs_to_tab(ac, av);
	ft_show_tab(a);
    return (0);
}


