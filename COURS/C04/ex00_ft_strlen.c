int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}
/* test ton code 
#include <stdio.h>

int main(void)
{
	char str[] = "hello";
	int res = ft_strlen(str);
	printf("%d", res);
	return 0;
}
*/