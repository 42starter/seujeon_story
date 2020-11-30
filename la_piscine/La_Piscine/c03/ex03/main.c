/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:32:29 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 15:59:06 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char *a;
	char *b;
	char res1[3] = "ab\0";
	char res2[10] = "abcd\0";

	a = ft_strncat(res2, res1, 3);
	printf("%s\n", a);
	res1[0] = 0;
	b = strncat(res2, res1, 3);
	printf("%s\n", b);
}
