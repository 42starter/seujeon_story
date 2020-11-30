/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:43:28 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 19:50:57 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_if(char **tab, int length, int (*f)(char *));

int		a(char *a)
{
	return (1);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (10));
	while (i < 9)
	{
		tab[i] = (char *)malloc(sizeof(char) * 10);
		tab[i] = "abc";
		i++;
	}
	tab[9] = 0;
	printf("%d\n", ft_count_if(tab, 10, a));
	return (0);
}