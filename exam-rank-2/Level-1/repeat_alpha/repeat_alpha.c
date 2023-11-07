#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	r;

	if (c == 2)
	{
		i = 0;
		r = 1;
		while (v[1][i] != '\0')
		{
			if (v[1][i] >= 'a' && v[1][i] <= 'z')
			{
				r = v[1][i] - 96;
				while (r-- > 0)
					write(1, &v[1][i], 1);
			}
			else if (v[1][i] >= 'A' && v[1][i] <= 'Z')
			{
				r = v[1][i] - 64;
				while (r-- > 0)
					write(1, &v[1][i], 1);
			}
			else if (v[1][i] >= 32 && v[1][i] <= 126)
				write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}