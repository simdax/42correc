#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../ansi_colors.h"

int ft_ultimate_range(int **range, int min, int max);

int	*test(int nb, int nb1)
{
	int *range;

	printf("length : ");
	printf("%d\n", ft_ultimate_range(&range, nb, nb1));
	int i = 0;
	while (i < nb1 - nb)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (range);
}

int main()
{
	printf(ANSI_COLOR_GREEN "trues\n\n><><><><><<>----____---___\n\n");
	printf("%p\n", test(1230, 1250));
 	printf("%p\n", test(0, 1));
//	printf("%p\n", test(-80, 46));
	printf(ANSI_COLOR_RED "\n\nfalses\n\n><><><><><<>----____---___\n\n");
 	printf("%p\n", test(0, 0));
	printf("%p\n", test(-1, -30));
}

