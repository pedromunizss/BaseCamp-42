#include <stdio.h>

int	ft_strlen(char	*str);
int main()
{
	char	a[] = "abc";

	int	b;

	b = ft_strlen(a);

	printf("len = %d\n", b);

}