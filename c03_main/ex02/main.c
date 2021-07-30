#include <stdio.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src);
int main()
{
    char a[] = "abc";
    char b[] = "def";




    //printf("strcat = %s\n\n", strcat(a,b));
	printf("ft_strcat = %s\n", ft_strcat(a,b));
	//printf("dest_len = %d\n", ft_strlen(c));

    return 0;
}
