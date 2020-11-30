/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:49:28 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 18:19:39 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	ft_putnbr_base(16, "01");
	write(1, "\n", 1);
	ft_putnbr_base(16, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-16, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(13, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-12, "0123456789ABCDEF");
}