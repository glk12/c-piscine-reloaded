int	ft_iterative_factorial(int nb)
{
	int val;

	val = 1;
	while(nb > 1)
		val *= nb--;
	return val;	
}

#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(5));
}
