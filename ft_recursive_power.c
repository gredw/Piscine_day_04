#include <stdio.h> 

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return(1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}

int main (int argc, char **argv)
{
	printf("%d\n", ft_recursive_power((argv[1][0] - 48), (argv[2][0] -48)));
//	printf("%d\n", ft_recursive_power(3,2));
	return (0);
}
