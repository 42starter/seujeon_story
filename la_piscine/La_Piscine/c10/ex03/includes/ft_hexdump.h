/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:26:48 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 02:26:16 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

# define MAX_SIZE 16
# define TRUE 1
# define FALSE
# define ERR_FILE -3
# define ERR_READ -1
# define ERR_OPTION -2
# define MSG_ERR_FILE ": No such file or directory\n"
# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2

int		ft_open(char *file);
int		ft_read_max(int fd, char buf[], int n);
void	ft_put_file_err(char *file, char *exe);
void	ft_putnstr(char *str, unsigned int n, int fd);
void	ft_putstr(char *str, int fd);
void	ft_putchar(char c, int fd);
void	ft_stdin(int option);
int		ft_get_index_of_n(int ac, char **av);
int		ft_get_index_of_opt(int ac, char **av);
int		ft_hexdump(int option, char *pre, char *cur, int fd);
int		ft_pars_argv(int ac, char **av);
void	ft_print_all_of_fd(int fd);
void	ft_print_all_of_file(char *file);
void	ft_print_n_bytes(char *file, int n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strncat(char *dest, char *src, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_filelen(char *file);
int		ft_get_data(int fd, char *line);
int		ft_process(char *file, char *exe, int option);
void	ft_tail(char *file, int n, int argc, int index);
void	ft_put_argv_err(char *offset, char *exe);
void	ft_print_head_opt(unsigned int size, int option, int is_last);
void	ft_printhex(unsigned char c);
void	ft_print_line(unsigned int size, char *cur, int option);
void	ft_print_hexdump(char *cur, int option);
void	ft_print_head_opt(unsigned int size, int option, int is_last);

#endif
