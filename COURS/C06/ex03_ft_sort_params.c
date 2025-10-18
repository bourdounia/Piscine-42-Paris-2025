#include <unistd.h>

void		ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int			main(int argc, char **argv)
{
	int		i;
	char	*swp;

	i = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swp;
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
	}
}