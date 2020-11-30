/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 09:32:29 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 16:07:03 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *a;
	char *b;
	char res1[10] = "abcefg";
	char res2[] = "fgab";

	a = ft_strstr(res1, res2);
	b = strstr(res1, res2);
	printf("%s %s\n", a, b);

}