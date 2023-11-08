#include <unistd.h>

void	put_nbr(int nbr)
{
	char *digit = "0123456789";

	if (nbr > 9)
		put_nbr(nbr / 10);
	write(1, &digit[nbr % 10], 1);
}

int	main(int c, char **v)
{
	(void)v;

	if (c > 0)
	{
		put_nbr(c - 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}