#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	if (c == 2)
	{
		while (v[1][i])
		{
			if (v[1][i] >= 'a' && v[1][i] <= 'z')
				v[1][i] = (v[1][i] - 'a' + 13) % 26 + 'a';
			else if (v[1][i] >= 'A' && v[1][i] <= 'Z')
				v[1][i] = (v[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}