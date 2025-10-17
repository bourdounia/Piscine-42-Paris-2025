#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = -1;
	len = ft_strlen(src);
	if (size)
		while (++i < (size - 1) && len && src[i])
			dest[i] = src[i];
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
  char str[100] = "salut, coMMent tu vas ? 42mots quaRante-deux; cinquante+et+un";
  ft_strcapitalize(str);
  printf("%s\n", str);

  return 0;
}
*/