#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char	*dest, char *src, unsigned int n);
int main()
{
	
	char source[] = "String de teste";
	char destiny[20];
	char *src;

	src = source;

	printf("Origem = %s\n", src);
	printf("\n");

	ft_strncpy(destiny, src, 3);
	
	printf("Origem = %s\nDestino = %s\n", src, destiny);

}