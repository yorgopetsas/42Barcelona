#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	k;

	if (c == 3)
	{
		i = 0;
		k = 0;
		while (v[1][i])
		{
			while (v[2][k])
			{
				if (v[2][k] == v[1][i])
					i++;
				k++;
			}
			if (v[1][i] == '\0')
			{
				i = 0;
				while (v[1][i])
					write(1, &v[1][i++], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}