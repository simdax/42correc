#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
