#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int c, char **v)
{
	int	i;
	int	s;
	int e;
	int	f;

	if (c > 1 && v[1][0])
	{
		i  = 0;
		while (is_space(v[1][i]))
			i++;
		s = i;
		while (!is_space(v[1][i]))
			i++;
		e = i;
		while (v[1][i] == ' ' || v[1][i] == '\t')
            i++;
		while (v[1][i])
		{
			while ((v[1][i] == ' ' && v[1][i + 1] == ' ') || (v[1][i] == '\t' && v[1][i + 1] == '\t'))
				i++;
			if (is_space(v[1][i]))
				f = 1;
			write(1, &v[1][i], 1);
			i++;
		}
		if (f)
		{
			write(1, " ", 1);
			f = 0;
		}
		while (s < e)
		{
				write(1, &v[1][s], 1);
				s++;
		}
	}
	write(1, "\n ", 1);
	return (0);
}