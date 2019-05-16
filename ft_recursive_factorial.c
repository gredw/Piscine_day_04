#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	
	else 
		return (ft_recursive_factorial(nb -1) * nb);
}
int main (int argc, char **argv)
{
	printf( "%d\n", ft_recursive_factorial(argv[1][0] - 48));;
	return (0);
}
