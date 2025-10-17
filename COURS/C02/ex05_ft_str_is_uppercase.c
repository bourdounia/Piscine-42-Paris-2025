int ft_str_is_uppercase(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < 'A' || str[i] > 'Z' )
      return 0;
    i++;
  }

  return 1;
}

/*
#include <stdio.h>
int main(void)
{
  char str[40] = "abc";
  int i = ft_str_is_uppercase(str);

  printf("%d", i);
  return 0;
}
*/