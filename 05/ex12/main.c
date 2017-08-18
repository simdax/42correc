int ft_str_is_numeric(char *str);

#include <stdio.h>

int main()
{
  char str[] = "FdSafDsafsdFdfDS45fds";
  char str2[] = "4567";
  printf("%d", ft_str_is_numeric(str));
  printf("%d", ft_str_is_numeric(str2));
  return (0);
}
