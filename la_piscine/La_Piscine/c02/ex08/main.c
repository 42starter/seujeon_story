/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:25:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/17 10:32:08 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	int		i;
	char	str[11];
	char	temp;
	char	*res;

	temp = 'a';
	i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
			str[i] = temp + 'A' - 'a';
		else
			str[i] = temp;
		temp++;
		i++;
	}
	str[i] = 0;
	printf("%s\n", str);
	res = ft_strlowcase(str);
	printf("%s\n", res);
	return (0);
}