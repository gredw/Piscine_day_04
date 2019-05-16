#include <stdio.h>

 int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	else 
		return  (ft_fibonacci(index - 1) +ft_fibonacci(index - 2));
}

int main (int argc, char **argv)
{
	 printf("%d\n", ft_fibonacci((argv[1][0] -48)));
	return (0);
}
