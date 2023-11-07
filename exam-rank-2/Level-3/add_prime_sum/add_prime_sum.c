#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}


void	put_nbr(int n)
{
	char	digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	ft_is_prime(int nbr)
{
	int	i;

	if (nbr <= 1)
		return (0);
	i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int c, char **v)
{
	int	i;
	int	nbr;
	int	res;

	nbr = ft_atoi(v[1]);
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			res += i;
		i++;
	}
	put_nbr(res);
	return (0);
}