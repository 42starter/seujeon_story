/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:33:04 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 10:28:32 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include "stdlib.h"
# include "unistd.h"
 
# define TRUE 1
# define FALSE 0
# define UP 1
# define DOWN 2
# define LEFT 3
# define RIGHT 4

int		check_row_left(int **map, int **grid, int cur_row, int n);
int		check_row_right(int **map, int **grid, int cur_row, int n);
int		check_column_up(int **map, int **grid, int cur_column, int n);
int		check_column_down(int **map, int **grid, int cur_column, int n);
int		check_grid_with_map(int **map, int **grid, int n);
int		is_duplication_column(int **map, int cur_row, int cur_column, int n);
int		is_duplication_row(int **map, int cur_row, int cur_column, int n);
int		is_duplication(int **map, int cur_row, int cur_column, int n);
int		is_numeric(char c);
int		is_below_n(int n, char c);
void	ft_free_2d_array(int **array, int n);
void	ft_free(int **map, int **grid, int n);
int		rec_dfs(int **map, int **grid, int n, int offset);
int		progress(int **map, int **grid, int n);
int		is_valid_argv(char *str, int *n);
int		pars_argv(char *str, int *n);
void	print_2d_array(int **array, int n);
int		*get_valid_grid(char *str, int *index, int n);
int		**init_grid(int n, char *str);
int		**init_map(int n);

#endif
