#include <stdio.h>
#include <string.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int nb);
int main()
{
    char a[] = "abc";
    char b[] = "defghij";




    //printf("strcat = %s\n\n", strcat(a,b));
	printf("ft_strncat = %s\n", ft_strncat(a,b,4));
	//printf("dest_len = %d\n", ft_strlen(c));

    return 0;
}
