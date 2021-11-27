#include <stdio.h>

int	ft_is_prime(int nb);
int	main(void)
{
	int	number;

	number = 0;

	while (number++ < 100)
		printf("%d = %s\n",number, ft_is_prime(number) ? "True" : "False");
	return (0);
}

int	ft_is_prime(int nb)
{
	int p;

	p = 1;
	if (nb < 2)
		return (0);
	while(++p != nb)
		if (nb % p == 0)
			return (0);
	return (1);
}
