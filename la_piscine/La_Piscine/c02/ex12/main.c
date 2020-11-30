/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:25:56 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/26 00:01:25 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	unsigned char str[100] = "b1ffasdasdasdadasdasd";

	//ft_print_hex((void *)"test");
	ft_print_memory(str, 25);
	return (0);
}
