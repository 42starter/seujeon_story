/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 03:55:41 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/27 19:53:02 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define ONE_LINE 1024

# define ERROR_NO_ARGV "File name missing.\n"
# define ERROR_TOO_MANY_ARGV "Too many arguments.\n"
# define ERROR_CANT_READ "Cannot read file.\n"

int		ft_display(char *file);

#endif
