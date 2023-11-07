#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	if (c == 2)
	{
		i = 0;
		while (v[1][i])
		{
			if ((v[1][i] >= 'a' && v[1][i] < 'z') || (v[1][i] >= 'A' && v[1][i] < 'Z'))
				v[1][i] = v[1][i] + 1;
			else if (v[1][i] == 'z' || v[1][i] == 'Z')
				v[1][i] = v[1][i] - 25;
			write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}