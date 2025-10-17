int ft_str_is_alpha(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;

  while (str[i] != '\0')
  {
    if(str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
      return 0;
    i++;
  }

  return 1;
}
/*
#include <stdio.h>

int main(void)
{
  char str[40] = "hello";
  int i = ft_str_is_alpha(str);

  printf("%d", i);
  return 0;
}
*/