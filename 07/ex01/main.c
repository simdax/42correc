#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int *ft_range(int min, int max);

int	 *test(	int nb,int nb1 )
{
//	char str[] = "coucou";
	int *tab;

	tab = ft_range(nb, nb1);
	int i = 0;
	while(i < nb1 - nb)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (tab);
}

int main()
{
	printf(ANSI_COLOR_GREEN "trues\n\n><><><><><<>----____---___\n\n");
	printf("%p\n", test(1230, 1250));
	printf(ANSI_COLOR_RED "\n\nfalses\n\n><><><><><<>----____---___\n\n");
 	printf("%p\n", test(0, 0));
	printf("%p\n", test(-1, -30));
}
