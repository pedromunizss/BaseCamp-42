#include <stdio.h>

char	*ft_strupcase(char	*str);

int main()
{
	char teste[] = "Ola Mundo";
	char *str;

	str=teste;
	printf("antes = %s\n", teste);
	printf("depois: %s\n", ft_strupcase(str));

}