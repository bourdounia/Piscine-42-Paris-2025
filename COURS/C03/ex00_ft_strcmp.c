int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
  {
    i++;
  }

  return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
  char str1[40] = "zfz";
  char str2[40] = "gfg";
  int result = ft_strcmp(str1, str2);
  printf("%d\n", result);

return 0;
  
}
*/