#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("%d ", ft_recursive_power(0, 0));
	printf("%d ", ft_recursive_power(1, 0));
	printf("%d ", ft_recursive_power(2, 2));
	printf("%d ", ft_recursive_power(3, 3));
	return (0);
}
