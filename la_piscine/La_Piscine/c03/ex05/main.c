/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:32:29 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 12:31:50 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	unsigned int a;
	unsigned int b;
	char res1[15] = "abc";
	char res3[15] = "abc";
	char res2[10] = "basdasd";

	a = ft_strlcat(res1, res2, 0);
	printf("%u %s\n", a, res1);
	b = strlcat(res3, res2, 0);
	printf("%u %s\n", a, res3);
}