#include <unistd.h>

int	ft_isin(char c, char *str, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int c, char **v)
{
	int	i;
	int	k;

	if (c == 3)
	{
		i = 0;
		k = 0;
		while (v[1][i])
			i++;
		while (v[2][k])
		{
			v[1][i] = v[2][k];
			i++;
			k++;
		}
		k = 1;
		i = 0;
		while (v[1][i])
		{
				if (!ft_isin(v[1][i], v[1], i))
					write(1, &v[k][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
}