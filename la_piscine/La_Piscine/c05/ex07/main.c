#include <stdio.h>

int		ft_find_next_prime(unsigned long long nb);

int		main(void)
{
	printf("%d \n", ft_find_next_prime(10));
	printf("%d \n", ft_find_next_prime(12));
	printf("%d \n", ft_find_next_prime(2147483646));
}
