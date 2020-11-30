/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:17:15 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:56:44 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>

# define MAX_SIZE 1
# define TRUE 1
# define FALSE
# define ERR_FILE -3
# define ERR_READ -1
# define ERR_OPTION -2
# define MSG_ERR_FILE ": No such file or directory\n"
# define MSG_ERR_OPTION "__"
# define MSG_ERR_OPT_OFFSET "illegal offset -- "
# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2

int		ft_open(char *file);
int		ft_read_max(int fd, char buf[], int n);
void	ft_put_err(void);
void	ft_put_file_err(char *file, char *exe);
void	ft_putnstr(char *str, unsigned int n, int fd);
void	ft_putstr(char *str, int fd);
void	ft_putchar(char c, int fd);
void	ft_stdin(void);
int		ft_atoi(char *str);
int		ft_get_index_of_n(int ac, char **av);
int		ft_get_index_of_opt(int ac, char **av);
int		ft_is_only_numeric(char *str);
int		ft_get_index_of_opt(int ac, char **av);
int		ft_get_index_of_n(int ac, char **av);
int		ft_pars_argv(int ac, char **av);
void	ft_print_all_of_fd(int fd);
void	ft_print_all_of_file(char *file);
void	ft_print_n_bytes(char *file, int n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_filelen(char *file);
int		ft_process(int n, char **argv, int argc, int index);
void	ft_tail(char **argv, int n, int argc, int index);
void	ft_print_header(char *file, int index, int do_newline);
void	ft_put_argv_err(char *offset, char *exe);

#endif
