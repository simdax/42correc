#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_compact(char **tab, int length);

int main()
{
  char *str[9] = { "fdsf", "coucou", NULL, "juste avant iun trou", "et iiiiici", NULL };
	printf("%d", ft_compact(str, 6));
	int i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
