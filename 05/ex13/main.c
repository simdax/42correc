int ft_str_is_lowercase(char *str);

#include <stdio.h>

int main()
{
  char str[] = "FdSafDsafsdFdfDS45fds";
  char str2[] = "fdsafda";
  char str3[] = "";
  printf("%d", ft_str_is_lowercase(str));
  printf("%d", ft_str_is_lowercase(str2));
  printf("%d", ft_str_is_lowercase(str3));
  return (0);
}
