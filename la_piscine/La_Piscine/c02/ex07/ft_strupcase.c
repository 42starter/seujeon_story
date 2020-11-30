/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:22:54 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/18 11:59:20 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *start;

	start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str += 'A' - 'a';
		str++;
	}
	return (start);
}
