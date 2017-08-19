#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_split(char *str, char *seps);

int main()
{
	char str[] = "j aime, k le mhaudit";
	char seps[] = ",kh";

	printf("%s", ft_split(str, seps));
	return (0);
}
