int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb == 0)
		return (0);
	while (nb > num * num)
		num++;
	if (nb == num * num)
		return (num);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d\n",ft_sqrt(1));
}*/