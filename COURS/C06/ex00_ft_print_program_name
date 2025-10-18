#include <unistd.h>

int	main(int argc, char **argv)
{
	while (*argv[0] && argc > 0)
	{
		write(1, &*argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}