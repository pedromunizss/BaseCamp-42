int	ft_strncmp(char	*s1, char	*s2, unsigned int n);

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (i < n)
		diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (diff);
}
