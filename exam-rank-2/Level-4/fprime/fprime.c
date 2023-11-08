#include <stdio.h>
#include <stdlib.h>

int	main(int c, char **v)
{
	int	nbr;
	int	i;

	if (c == 2)
	{
		i = 1;
		nbr = atoi(v[1]);
		if (nbr == 1)
			printf("1");
		while (nbr >= i)
		{
			i++;
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break ;
				printf("*");
				nbr = nbr / i;
				i = 1;
			}
		}
	}
	printf("\n");
}