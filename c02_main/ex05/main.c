#include <stdio.h>

int ft_str_is_uppercase(char *str);
int main()
{
	int a;
	char teste[] = "asdf";
	char *is_upper;

	is_upper = teste;
	a = ft_str_is_uppercase(is_upper);

	printf("is_upper = %s\n", is_upper);
	printf("Saida: %d\n", a);
}