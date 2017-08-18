void ft_putnbr(int);

#include <limits.h>
#include <stdio.h>

int main()
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
	ft_putnbr(INT_MIN);
	printf("\n");
	return (0);
}
