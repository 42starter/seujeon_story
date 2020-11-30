/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:36:41 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 21:18:27 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	index = 0;
	if (size > 0)
	{
		while (index < size - 1 && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = 0;
	}
	while (src[index])
		index++;
	return (index);
}
