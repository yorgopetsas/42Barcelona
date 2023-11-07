int		max(int* tab, unsigned int len)
{
	int	res;
	unsigned int	i;

	if (len == 0)
		return (0);
	i = 0;
	res = tab[i];
	while (len > i)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}