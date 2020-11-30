/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:49:28 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/20 10:59:28 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	int a;
	
	a = ft_atoi_base("-+--0120", "0123456789");
	printf("%d\n", a);
}
