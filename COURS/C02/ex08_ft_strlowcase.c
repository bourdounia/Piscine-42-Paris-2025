char *ft_strlowcase(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
	if(str[i] >= 'A' && str[i] <= 'Z')
    	str[i] = str[i] + 32;
    i++;
  }

  return str;
}

/*
#include <stdio.h>

int main(void)
{
  char str[40] = "42HELLO";
  ft_strlowcase(str);
  printf("%s", str);
  return 0;
}
*/