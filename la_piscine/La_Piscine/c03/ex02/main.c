/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:32:29 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 10:29:54 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char *a;
	char *b;
	char res1[1];
	char res2[10];

	res2[0] = 'a';
	res2[1] = 'b';
	res2[2] = 0;
	a = ft_strcat(res1, res2);
	printf("%s\n", a);
	res1[0] = 0;
	b = strcat(res1, res2);
	printf("%s\n", b);
}