#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int c, char **v)
{
	int	l;

	if (c == 2)
	{
		l = ft_strlen(v[1]) - 1;
		while (l >= 0)
		{
			write(1, &v[1][l--], 1);
		}
	}
	write(1, "\n", 1);
}