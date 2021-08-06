int ft_iterative_power(int  nb, int power);

int ft_iterative_power(int  nb, int power)
{
    int i;
    int aux;
    
    if (power < 0)
        return(0);
    else if (power == 0)
        return(1);
    else
        {
            i = 1;
            aux = 1;
            while (i <= power)
            {
                aux *= nb;
                i++;
            }
            return(aux);
        }
}
