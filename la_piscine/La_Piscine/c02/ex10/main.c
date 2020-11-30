/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:25:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 14:33:39 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	str[13] = "abc";
	char	str2[13];
	int		res;
	//int		res2;
	str2[0] = 0;
	res = strlcpy(str, str2, 0);
	//res2 = ft_strlcpy(str2, "abadc", 11);
	printf("%s \n", str);
	//printf("%s %d\n", str2, res2);
	return (0);
}
