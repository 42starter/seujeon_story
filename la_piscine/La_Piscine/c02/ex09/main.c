/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:25:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/20 09:04:42 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[100] = "#y#Hy}Kz`1 xn=%phbv|L_H5vs#pj;9ls";
	char	temp;
	char	*res;

	temp = 'a';
	printf("%s\n", str);
	res = ft_strcapitalize(str);
	printf("%s\n", res);
	return (0);
}
