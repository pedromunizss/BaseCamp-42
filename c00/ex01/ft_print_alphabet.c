#include <unistd.h> 

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter <= 122)
	{
		ft_putchar(letter);
		letter++;
	}
}
