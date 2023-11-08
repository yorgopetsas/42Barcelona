#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

void print_hex(int nbr)
{
	char *hex = "0123456789abcdef";

	if (nbr > 16)
	{
		print_hex(nbr / 16);
	}
	write(1, &hex[nbr % 16], 1);
}

int	main(int c, char **v)
{
	int	nbr;

	if (c == 2)
	{
		print_hex(ft_atoi(v[1]));
	}
	write(1, "\n", 1);
	return (0);
}