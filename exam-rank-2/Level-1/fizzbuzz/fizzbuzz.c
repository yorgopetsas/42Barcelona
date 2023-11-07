#include <unistd.h>

void	put_nbr(int nbr)
{
	char d[10] = "0123456789";

	if (nbr > 9)
		put_nbr(nbr / 10);
	write(1, &d[nbr % 10], 1);
}

int	main(int argc, char **v)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
