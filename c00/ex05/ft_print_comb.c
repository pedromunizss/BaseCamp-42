#include <unistd.h>

void	ft_putchar(char c, char d, char u);
void	ft_print_comb(void);

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	cent;
	char	dez;
	char	unid;

	cent = '0';
	while (cent <= '7')
	{
		dez = cent + 1;
		while (dez <= '8')
		{
			unid = dez + 1;
			while (unid <= '9')
			{
				ft_putchar(cent, dez, unid);
				unid++;
			}
			dez++;
		}
		cent++;
	}
}
