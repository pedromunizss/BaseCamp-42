#include <stdio.h>

char	*ft_strlowcase(char	*str);

int main()
{
	char teste[] = "Ola MundO";
	char *str;

	str=teste;
	printf("antes = %s\n", teste);
	printf("depois: %s\n", ft_strlowcase(str));

}