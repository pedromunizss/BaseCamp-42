#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char teste1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str1;
	str1 = teste1;
	
	char teste2[] = " s aLuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";
	char *str2;
	str2 = teste2;

	printf("\nTeste1 antes  = %s\n", teste1);
	ft_strcapitalize(str1);
	printf("Teste1 depois = %s\n", str1);
	printf("--------\n");
	printf("Teste2 antes  = %s\n", teste2);
	ft_strcapitalize(str2);
	printf("Teste2 depois = %s\n\n", str2);	


	return(0);
}