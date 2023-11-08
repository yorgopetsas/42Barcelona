#include <stdio.h>
#include <stdlib.h>

int	main(int c, char **v)
{
	int	i;
	int	a;
	int	b;

	if (c == 3)
	{
		a = atoi(v[1]);
		b = atoi(v[2]);
		if (a < b)
			i = a;
		else
			i = b;
		while (i > 0)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d\n", i);
				return (0);
			}
			i--;
		}
	}
	printf("\n");

}