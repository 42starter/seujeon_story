/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 05:33:38 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/15 05:33:39 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tail;
	int temp;

	i = 0;
	tail = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[tail];
		tab[tail] = temp;
		i++;
		tail--;
	}
}
