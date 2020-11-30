/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:28:51 by sw                #+#    #+#             */
/*   Updated: 2020/10/17 10:20:36 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *a, char *b, unsigned int c);

int		main(void)
{
	char	temp[30];
	char	*src;

	src = "ItsTestasdas";
	ft_strncpy(temp, src, sizeof(src));
	printf("%s", temp);
}
