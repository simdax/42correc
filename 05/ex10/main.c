char	*ft_strcapitalize(char *str);

#include <stdio.h>

int main()
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s", ft_strcapitalize(str));
  return (0);
}
