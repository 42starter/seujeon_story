/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 10:52:43 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 10:52:44 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
