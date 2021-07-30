#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_str_is_alpha(char *str);
int main (void)
{
	int a;
	char teste1[] = "óRIGEM"; 
	char *str1;
	str1 = &teste1[0];

	int b;
	char teste2[] = "50a";
	char *str2;
	str2 = teste2;
	
	int c;
	char teste3[] = "";
	char *str3;
	str3 = teste3;

	a = ft_str_is_alpha(str1);
	printf("Caracteres = %d\n", a);
	
	b = ft_str_is_alpha(str2);
	printf("Teste caracteres + números = %d\n", b);
	
	c = ft_str_is_alpha(str3);
	printf("Teste vazio = %d\n", c);

	return(0);	
}
