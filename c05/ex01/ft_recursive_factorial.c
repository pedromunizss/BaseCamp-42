int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
