#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
  char src[40] = "carty";
  char dest[40] = "fgsfggsfgf";
  int size = 4;
  int i = 0;

  ft_strncpy(dest, src, size);
  printf("%s\n", dest);
  return 0;
}
*/