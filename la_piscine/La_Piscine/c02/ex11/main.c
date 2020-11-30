/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:25:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/18 12:23:19 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	str[11];

	str[0] = 'C';
	str[1] = 'o';
	str[2] = 'u';
	str[3] = '\n';
	str[4] = 't';
	str[5] = 'u';
	str[6] = ' ';
	str[7] = 'v';
	str[8] = 'a';
	str[9] = 's';
	ft_putstr_non_printable(str);
	return (0);
}
