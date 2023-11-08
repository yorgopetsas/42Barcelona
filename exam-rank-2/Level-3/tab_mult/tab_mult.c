#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}

	return (res);
}

void	put_nbr(int nbr)
{
	char	*digit;

	digit = "0123456789";
	if (nbr > 9)
		put_nbr(nbr / 10);
	write(1, &digit[nbr % 10], 1);
}

int	main(int c, char **v)
{
	int	i;
	int	nbr;

	if (c == 2)
	{
		i = 1;
		nbr = ft_atoi(v[1]);
		while (i < 10)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nbr);
			write(1, " = ", 3);
			put_nbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}