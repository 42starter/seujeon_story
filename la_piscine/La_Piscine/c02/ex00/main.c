/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:28:51 by sw                #+#    #+#             */
/*   Updated: 2020/10/17 10:20:58 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *a, char *b);

int		main(void)
{
	char	temp[10];
	char	*src;

	src = "ItsTest";
	ft_strcpy(temp, src);
	printf("%s", temp);
}
