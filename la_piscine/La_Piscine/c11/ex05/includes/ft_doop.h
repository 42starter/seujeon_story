/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:09:02 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 20:53:21 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

# include "unistd.h"

# define ERR_DV_ZERO "Stop : division by zero\n"
# define ERR_MD_ZERO "Stop : modulo by zero\n"

int		ft_is_valid_op(char *op);
int		ft_atoi(char *str);
void	ft_print_res(int a, int b, char c);
void	ft_putstr(char *str);
void	ft_putnbr(long long c);
int		ft_check_op(char c);

#endif
