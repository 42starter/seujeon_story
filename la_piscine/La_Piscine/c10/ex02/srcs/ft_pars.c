/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pars.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:20:05 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:54:24 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		ft_get_index_of_opt(int ac, char **av)
{
	(void)ac;
	if (ft_strcmp("-c", av[1]) == 0)
		return (1);
	return (ERR_OPTION);
}

int		ft_get_index_of_n(int ac, char **av)
{
	int		index;

	index = ft_get_index_of_opt(ac, av);
	if (index == ERR_OPTION)
		return (ERR_OPTION);
	if (!(index + 1 < ac && ft_is_only_numeric(av[index + 1])))
		return (ERR_OPTION);
	return (index + 1);
}

int		ft_pars_argv(int ac, char **av)
{
	int		index;

	if ((index = ft_get_index_of_n(ac, av)) != 2)
		return (ERR_OPTION);
	return (ft_atoi(av[index]));
}
