/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:01:40 by seujeon           #+#    #+#             */
/*   Updated: 2020/11/03 02:11:02 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_open(char *file)
{
	return (open(file, O_RDONLY));
}

int		ft_check_line(t_read_info info, t_bool flag)
{

}

	// 첫번째 줄의 길이
	// 01 같은 입력 예외처리
	// 숫자가 끝나고 문자가 개행문자까지 4개
	
	// 한 개씩 읽는다.
	// 처음이고 0이면 False

	// 숫자가 아닌 값이 나오면 4개를 읽고 3개가 프린터블이고 마지막이 개행문자이여야한다.
	// 4개를 읽을 때 length 가 4가 안되거나, 서로의 값이 같거나 하면 오류

t_type	*ft_readline(t_type fd)
{
	t_type		*res;
	t_read_info	info;

	ft_setinfo(&info);
	while ((info.length = read(fd, info.buf, ONE_BYTE)) > 0)
	{
		if (info.total == info.cur_size &&
				!(res = ft_char_realloc(res, &(info.cur_size))))
		{
			ft_free_safety(res);
			return (0);
		}
		info.total += info.length;
		if (info.buf[0] == '\n')
			break ;
	}
	return (res);
}

/*
char	*ft_read_line(int fd)
{
	char		*res;
	t_read_info	info;
	t_bool		flag;
	int			count;

	ft_setinfo(&info);
	ft_set_readline(&res, &flag, &count);
	while ((info.length = read(fd, info.buf, ONE_BYTE)) > 0)
	{
		if (info.buf[0] == '\n')
			break ;
		if (!flag && is_printable_ifn_num(info.buf[0]) || (flag && count))
		{
			flag = 1;
			count++;
		}
		if ((info.total == info.cur_size &&
				!(res = ft_char_realloc(res, info.cur_size)))
			|| (info.length == 1 && info.buf[0] == '0') || count > 3)
		{
			ft_free_safety(res);
			return (0);
		}
		info.cur_size <<= 1;
		ft_strncat(res + info.total, info.buf, 1);
		info.total += info.length;
	}
	return (res);
}
*/

char	*ft_read_all(char *file, char *pre)