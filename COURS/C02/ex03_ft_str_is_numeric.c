int ft_str_is_numeric(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < '0' || str[i] > '9')
      return 0;
    i++;
  }

  return 1;
}

/*
#include <stdio.h>

int main(void)
{
  char str[40] = "123";
  int i = ft_str_is_numeric(str);

  printf("%d", i);
  return 0;
}
*/