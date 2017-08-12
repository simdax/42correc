#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_unmatch(int *tab, int length);

int main()
{
  int tab[9] = {10, 1, 1, 9, 9, 5, 5, 7, 7};

	printf("%d", ft_unmatch(tab, 9));
	return (0);
}
