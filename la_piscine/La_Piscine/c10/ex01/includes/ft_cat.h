/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:09:15 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 07:02:31 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>

# define MAX_SIZE 1
# define TRUE 1
# define FALSE
# define ERR_FILE 0
# define ERR_READ -1
# define MSG_ERR_FILE ": No such file or directory\n"
# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2

int		ft_open(char *file);
int		ft_read_max(int fd, char buf[MAX_SIZE]);
int		ft_cat(char *file);
void	ft_put_file_err(char *file, char *exe);
void	ft_putnstr(char *str, unsigned int n, int fd);
void	ft_putstr(char *str, int fd);
void	ft_putchar(char c, int fd);
void	ft_stdin(void);

#endif
