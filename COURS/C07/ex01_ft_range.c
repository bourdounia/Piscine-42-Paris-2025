#include <stdlib.h>

int *ft_range(int min, int max)
{
	if(min >= max)
		return (0);

	int *a;
	int i = 0;
	int range = max - min;

	a = (int *)malloc(sizeof(int) * range);
	while(i < range)
	{
		a[i] = min + i;
		i++;
	}

	return a;
}