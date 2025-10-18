int	ft_recursive_power(int nb, int power)
{
	int	numero;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		numero = ft_recursive_power(nb, power - 1);
		numero = numero * nb;
		nb--;
	}
	else
		numero = nb;
	return (numero);
}
/*
#include <stdio.h>
int main()
{
	int i;
	i = ft_recursive_power(2, 0);
	printf("%d", i);
}
    */