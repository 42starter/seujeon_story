/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:59:26 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 02:11:02 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define READ_SIZE 1
# define ONE_BYTE 1

typedef unsigned int		t_type;
typedef unsigned long long	t_ull;
typedef unsigned char		t_uc;
typedef unsigned int		t_ui;

typedef enum				e_bool
{
	False,
	True
}							t_bool;

typedef struct				s_input
{
	unsigned char		obstacle;
	unsigned char		possible;
	unsigned char		square;
	t_type				length;
	t_type				*map;
}							t_input;

typedef struct				s_read_info
{
	t_type	length;
	t_type	total;
	t_type	cur_size;
	t_type	buf[ONE_BYTE];
}							t_read_info;

t_input			g_input;

void	ft_process(char *file);
void	ft_free_safety(char *str);

int		ft_open(char *file);
char	*ft_read_str(int fd);
char	*ft_char_realloc(char *pre, t_ull *pre_size);
t_ull	*ft_read_ull_line(int fd);

int		is_printable_ifn_num(char c);

void	ft_setinfo(t_read_info *info);
void	ft_set_readline(char **res, t_bool *flag, int *count);

#endif
