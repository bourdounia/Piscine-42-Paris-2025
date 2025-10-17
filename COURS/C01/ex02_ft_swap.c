void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/* test ton code 
#include <unistd.h>
int		main(void)
{
	int a = 3;
	int b = 18;
	ft_swap(&a, &b);
	if (b == 3 && a == 18)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
*/