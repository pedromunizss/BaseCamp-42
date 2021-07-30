#include <stdio.h>

int ft_str_is_lowercase(char *str);
int main()
{
	int a;
	char numbers[] = "Arere";
	char *teste;
	teste = numbers;
	a = ft_str_is_lowercase(teste);

	printf("teste = %s\n", teste);
	printf("Saida: %d\n\n", a);

}