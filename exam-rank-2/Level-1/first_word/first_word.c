#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	if (c == 2)
	{
		i = 0;
		while (v[1][i] == ' ' || v[1][i] == '\t')
			i++;
		while (!(v[1][i] == ' ' || v[1][i] == '\t'))
		{
			write(1, &v[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
