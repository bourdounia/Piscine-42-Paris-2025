#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);

/* test ton code
#include <unistd.h>
int main(void)
{
	char str[] = "hello world";
	ft_putstr(str);
	return 0;
}
*/