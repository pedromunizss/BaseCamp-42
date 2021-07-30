#include <stdio.h>
int	ft_str_is_printable(char	*str);

int main()
{
	int a;
	char teste[] = {32,33,34}; //(space, !, ")
	char *str;
	str = teste;
	a = ft_str_is_printable(str);

	printf("str = %s\n", str);
	printf("saída: %d\n", a);


}