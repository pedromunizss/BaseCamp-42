#include <unistd.h> 

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 122;
	while (letter >= 97)
	{
		ft_putchar(letter);
		letter--;
	}
}
