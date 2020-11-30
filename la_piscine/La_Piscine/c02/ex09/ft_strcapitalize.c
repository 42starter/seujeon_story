/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:40:38 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/21 16:24:45 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	return (0);
}

int		ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_is_alpha(str[i]) == 1)
			str[i] += 'A' - 'a';
		else if (i > 0 && ft_is_alpha(str[i]) == 1 &&
		!ft_is_numeric(str[i - 1]) && !ft_is_alpha(str[i - 1]))
			str[i] += 'A' - 'a';
		else if (i > 0 && ft_is_alpha(str[i]) == 2 && (ft_is_numeric(str[i - 1])
		|| ft_is_alpha(str[i - 1])))
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}
