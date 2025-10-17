void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
/* pour test ton code 
#include <unistd.h>
int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 16;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	if (div == 3 && mod == 1)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
*/