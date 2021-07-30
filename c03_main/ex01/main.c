#include <stdio.h>
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n);
int main()
{
    char a[] = "ola mundo";
    char b[] = "ola mundm";

    int c;
	int d;
    
    c = strncmp(a,b,9);
    d = ft_strncmp(a,b,9);

    printf("retorno de strcmp = %d\n", c);
	printf("retorno de ft_strcmp = %d\n", d);

    return 0;
}
