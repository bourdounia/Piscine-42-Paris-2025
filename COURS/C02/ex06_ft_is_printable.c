int ft_str_is_printable(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < 32 || str[i] > 126 )
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
  int i = ft_str_is_printable(str);

  printf("%d\n", i);
  printf("%c", 32);

  return 0;
}
*/