#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ansi_colors.h"

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
