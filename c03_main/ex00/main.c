#include <stdio.h>
#include <string.h>

int	ft_strcmp(char	*s1, char	*s2);
int main()
{
    char a[] = "ola mundo";
    char b[] = "ola mundm";

    int c;
	int d;
    
    c = strcmp(a,b);
    d = ft_strcmp(a,b);

    printf("retorno de strcmp = %d\n", c);
	printf("retorno de ft_strcmp = %d\n", d);

    return 0;
}
