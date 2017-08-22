int ft_str_is_alpha(char *str);

#include <stdio.h>

int main()
{
  char str[] = "FdSafDsafsdFdfDS45fds";
  char str2[] = "FdSafDsafsdFdfDSfds";
  printf("%d", ft_str_is_alpha(str));
  printf("%d", ft_str_is_alpha(str2));
  return (0);
}
