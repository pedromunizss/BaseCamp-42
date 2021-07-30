#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src);
//strcpy () -> copia a string de origem para a string de destino 
//destiny 	-> para onde a string será copiada
//source  	-> de onde a string é copiada
int main (void)
{

	//char nome[15];

	//strcpy(nome,"Fulano");
	//strcpy(destiny, source);
	//printf("Nome = %s\n", nome);


	char source[] = "String de Origem";
	char destiny[20];
	char *src;

	src = source;

	printf("Origem = %s\n", source);
	printf("\n");

	ft_strcpy(destiny, src);
	
	printf("Origem = %s\nDestino = %s\n", src, destiny);
}