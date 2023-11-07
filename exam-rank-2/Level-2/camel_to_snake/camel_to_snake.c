#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	if (c == 2)
	{
		i = 0;
		while (v[1][i] != '\0')
		{
			if (v[1][i] >= 'A' && v[1][i] <= 'Z')
			{
				v[1][i] = v[1][i] + 32;
				write(1, "_", 1);
			}
			write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}