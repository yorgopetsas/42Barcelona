#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	r;
	int	i;
	int	sign;

	r = 0;
	i = 0;
	if (str[0] == '-')
	{
		i++;
		sign = -1;
	}
	while (str[i] != '\0')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * sign);
}

int	main(void)
{
	char	*i;
	int		r;

	i = "-11231230";
	r = ft_atoi(i);
	printf("%d\n", r);
	return (0);
}