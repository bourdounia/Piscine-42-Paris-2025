#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/* test ton code
#include <stdio.h>
int main()
{
    int *p;
    int i;

    i = ft_ultimate_range(&p, 0, 20);
    printf("%d\n", i);
    while (i > 0)
    {
        printf("%d ", *p);
        p++;
        i--;
    }   
    free(p);
}*/