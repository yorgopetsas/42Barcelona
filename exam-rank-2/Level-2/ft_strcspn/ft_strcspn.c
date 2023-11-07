size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	int		j;

	i = 0;
	j = i;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
