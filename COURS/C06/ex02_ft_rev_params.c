#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	o;

	o = size - 1;
	if (size > 1)
	{
		while (o >= 1)
		{
			i = 0;
			while (args[o][i])
				i++;
			write(1, args[o], i);
			write(1, "\n", 1);
			o--;
		}
	}
}