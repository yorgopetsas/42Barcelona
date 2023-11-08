#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t'  || c == '\0')
		return (1);
	return (0);
}

int	main(int c, char **v)
{
	int	i;
	int	s;
	int	e;
	int	f;

	i = 0;
	s = 0;
	f = 0;
	e = 0;
	if (c == 2)
	{
		while (v[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while(is_space(v[1][i]))
				i--;
			e = i;
			while(!is_space(v[1][i]))
				i--;
			s = i + 1;
			f = s;
			while (e >= s)
			{
				write(1, &v[1][s], 1);
				s++;
			}
			if (f)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}