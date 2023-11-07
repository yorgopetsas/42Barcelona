#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

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

		k = 1;
		while (v[k][i])
		{
			if ((ft_isin(v[1][i], v[1], i) == 0) && (ft_isin(v[1][i], v[2], ft_strlen(v[2])) == 1))
				write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}