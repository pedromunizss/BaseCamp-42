#include <unistd.h>
void    ft_putchar(char c);
void    ft_putnbr(int   nb);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int   nb)
{
    long nb;

    if (nb >= 0)
    {
        if (nb > 9)
            ft_putnbr(nb / 10);
        ft_putchar('0' + nb % 10);
    }
    else
    {
        ft_putchar('-');
        nb *= -1;
        ft_putnbr(nb);
    }
}
