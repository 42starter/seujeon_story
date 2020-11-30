/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:43:27 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:19:47 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_process(char *file, char *input)
{
	char	*dict;
	char	**strs;
	int		error;

	if (!is_valid_input(input))
	{
		ft_putstr(ERR_INPUT);
		return (0);
	}
	if (!(dict = ft_get_dict(file)))
		return (0);
	strs = ft_split(dict, "\n");
	if ((error = ft_check_dict(strs)) == 0)
		ft_putstr(ERR_INVALID_DICT);
	else if ((error = ft_rush(strs, input)) == 0)
		ft_putstr(ERR_CANT_SOLVE);
	ft_free_2d_n_array(strs, FLAG_UTILL_NULL);
	if (error == 0)
		return (0);
	return (1);
}

int		ft_process_default(char *input)
{
	return (ft_process(DEFAULT_FILE, input));
}
