#include <unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printchar(a / 10 + '0');
			ft_printchar(a % 10 + '0');
			ft_printchar(' ');
			ft_printchar(b / 10 + '0');
			ft_printchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
				write(1, ", ", 1);
			b++;
		}
        a++;
    }
}
/* pour verifier ton code 
int main()
{
    ft_print_comb2();
    return (0);
}
/*           