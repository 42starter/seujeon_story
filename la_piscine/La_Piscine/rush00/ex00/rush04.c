/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:49:45 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/17 18:31:00 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		is_vertex_and_put(int x, int y, int a, int b)
{
	if (a == 0 && b == 0)
		ft_putchar('A');
	else if (a == x - 1 && b == 0)
		ft_putchar('C');
	else if (a == 0 && b == y - 1)
		ft_putchar('C');
	else if (a == x - 1 && b == y - 1)
		ft_putchar('A');
	else
		return (0);
	return (1);
}

void	rush(int x, int y)
{
	int a;
	int b;

	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			if (!is_vertex_and_put(x, y, a, b))
			{
				if (b == 0 || b == y - 1)
					ft_putchar('B');
				else if (a == 0 || a == x - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			a++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		b++;
	}
}
