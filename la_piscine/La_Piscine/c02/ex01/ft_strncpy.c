/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 00:38:05 by sw                #+#    #+#             */
/*   Updated: 2020/10/18 04:38:47 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *start;

	start = dest;
	while (n)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = 0;
		n--;
	}
	return (start);
}
