char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	k;

	if (!s1 || !s2)
		return (0);
	k = 0;
	i = 0;
	while (s1[i])
	{
		while (s2[k])
		{
			if (s1[i] == s2[k])
				return ((char *) s1);
			k++;
		}
		i++;
	}
	return (0);
}
