int	ft_strcmp(char	*s1, char	*s2);

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (diff);
}
