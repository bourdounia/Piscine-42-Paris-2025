int	ft_iterative_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	numero = nb;
	nb--;
	while (nb > 1)
	{
		numero = numero * nb;
		nb--;
	}
	return (numero);
}
/* test ton code 
#include <stdio.h>

int main()
{
	int i;
	i = ft_iterative_factorial(3);
	printf("%d", i);
}*/