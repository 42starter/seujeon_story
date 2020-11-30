/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:34:18 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/01 12:30:00 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2
# define READ_SIZE 1024
# define DEFAULT_FILE "numbers.dict"
# define ERR_INPUT "Error\n"
# define ERR_OPEN "Dict Error\n"
# define ERR_READ "Dict Error\n"
# define ERR_INVALID_DICT "Dict Error\n"
# define ERR_CANT_SOLVE "Dict Error\n"
# define FLAG_UTILL_NULL -1

typedef struct	s_list
{
	int				length;
	char			*key;
	char			*value;
	struct s_list	*next;
	struct s_list	*pre;
}				t_list;

int				ft_check_key(char *str, int *col);
int				ft_check_value(char *str, int *col);
int				ft_check_dict(char **strs);
char			*ft_get_value(char *str);
char			*ft_get_key(char *str);
char			*ft_get_dict(char *file);
char			*ft_extend_array_nbyte(char *dest, unsigned int n);
int				ft_open(char *file);
char			*ft_read_all(int fd);
void			ft_free_list(t_list *list);
void			ft_free_safety(char *str);
void			ft_free_2d_n_array(char **strs, long n);
int				is_space(char c);
int				is_printable(char c);
int				is_numeric(char c);
int				is_only_numeric(char *str);
int				is_valid_input(char *input);
t_list			*ft_create_list(char *key, char *value);
void			ft_add_list(t_list **start, t_list *new);
t_list			*ft_get_dict_list(char **strs);
int				ft_process(char *file, char *input);
int				ft_process_default(char *input);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_rush(char **strs, char *input);
int				is_in_charset(char c, char *charset);
unsigned int	ft_get_row(char *str, char *charset);
char			*strdup_till_sep(char *str, char *charset, unsigned int *index);
char			**ft_split(char *str, char *charset);
int				ft_strlen(char *str);
void			ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *str);
void			ft_strncpy(char *dest, char *src, unsigned int n);
void			ft_strncat(char *dest, char *src, unsigned int n);
char			*ft_strndup(char *str, unsigned int n);

#endif
