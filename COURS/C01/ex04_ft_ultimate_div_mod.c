void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
/* test ton code 
#include <unistd.h>
int		main(void)
{
	int a;
	int b;

	a = 16;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	if (a == 3 && b == 1)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
    */