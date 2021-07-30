#include <stdio.h>
int	ft_iterative_factorial(int	nb);

int	ft_iterative_factorial(int	nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (0 < i && j <= nb)
	{
		i = i * j;
		j++;
	}
	return (i);
}
