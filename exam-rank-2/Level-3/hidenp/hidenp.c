#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	k;

	if (c == 3)
	{
		while (v[1][i] && v[2][k])
		{
			if (v[1][i] == v[2][k])
				i++;
			k++;
		}
		if (v[1][i])
			write(1, "0", 1);
		else
			write(1, "1", 1);
	}
	write(1, "\n", 1);
	return (0);
}