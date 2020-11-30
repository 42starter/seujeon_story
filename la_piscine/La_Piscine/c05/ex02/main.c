#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("%d ", ft_iterative_power(0, 0));
	printf("%d ", ft_iterative_power(1, 0));
	printf("%d ", ft_iterative_power(-4, 3));
	printf("%d ", ft_iterative_power(3, 1));
	return (0);
}
