#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_numeric(char *str);
int	main (void)
{
	int a;
	char teste1[] = "1234";
	char *str1;
	str1 = teste1;

	int b;
	char teste2[] = "ab2c";
	char *str2;
	str2 = teste2;

	int c;
	char teste3[] = "";
	char *str3;
	str3 = teste3;

	a = ft_str_is_numeric(str1);
	printf("Teste1 = %d\n", a);
	
	b = ft_str_is_numeric(str2);
	printf("Teste2 = %d\n", b);	

	c = ft_str_is_numeric(str3);
	printf("Teste3 = %d\n", c);	

	return(0);
}