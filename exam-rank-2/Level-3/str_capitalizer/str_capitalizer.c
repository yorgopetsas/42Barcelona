#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c ==  '\n')
		return (1);
	return (0);
}

void	ft_capitalizer(char *v)
{
	int	i;

	i = 0;
	if (v[i] >= 'a' && v[i] <= 'z')
		v[i] -= 32;
	write(1, &v[i], 1);
	i++;
	while (v[i])
	{
		if (v[i] >= 'A' && v[i] <= 'Z')
			v[i] += 32;
		if ((v[i] >= 'a' && v[i] <= 'z') && v[i - 1] == ' ' )
			v[i] -= 32;
		write(1, &v[i], 1);
		i++;
	}
}

int	main(int c, char **v)
{
	int	k;

	if (c > 1)
	{
		k = 1;
		while (k < c)
		{
			ft_capitalizer(v[k]);
			write(1, "\n", 1);
			k++;
		}
	}
	else
		write(1, "\n", 1);
}


// ) || (v[i] >= 'a' && v[i] <= 'z' && v[i - 1] == ' ') 