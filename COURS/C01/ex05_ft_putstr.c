#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		write(1, &str[i], 1);
}
/* test ton code
#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "0123456789";
	char str1[] = "test";

	printf("0123456789:\n");
	ft_putstr(str);
	printf("\n\ntest:\n");
	ft_putstr(str1);
}
    */