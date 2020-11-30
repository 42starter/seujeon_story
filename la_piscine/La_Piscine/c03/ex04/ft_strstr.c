/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:12:47 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/19 16:04:19 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	int				find;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		i = 0;
		find = 1;
		while (to_find[i] && str[i])
		{
			if (to_find[i] != str[i])
			{
				find = 0;
				break ;
			}
			i++;
		}
		if (find && i == ft_strlen(to_find))
			return (str);
		str++;
	}
	return (0);
}
