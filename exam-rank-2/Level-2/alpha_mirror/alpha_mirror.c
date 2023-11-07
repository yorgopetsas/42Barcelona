#include <unistd.h>

int	main(int argc, char **v)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (v[1][i] != '\0')
		{
			if (v[1][i] >= 'a' && v[1][i] <= 'z')
				v[1][i] = 'z' - (v[1][i] - 97);
			else if (v[1][i] >= 'A' && v[1][i] <= 'Z')
				v[1][i] = 'Z' - (v[1][i] - 65);
			write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
