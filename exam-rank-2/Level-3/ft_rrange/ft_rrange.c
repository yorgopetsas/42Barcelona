#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	*ft_rrange(int start, int end)
{
	int	size = 0;
	int tmp = 0;
	int	*result;
	int	i = 0;

	if (start == end)
	{
		result = (int *)malloc(sizeof(int) * 1);
		result[0] = start;
		return (result);
	}
	else if (start > end)
	{
		tmp = start;
		while (tmp > end)
		{
			size++;
			tmp--;
		}
	}
	else if (start < end)
	{
		tmp = start;
		while (tmp < end)
		{
			size++;
			tmp++;
		}
	}
	size++;
	result = (int *)malloc(sizeof(int) * size);

	if (start > end)
	{
		while (start > end)
		{
			result[i] = end;
			end++;
			i++;
		}
	}
	else
	{
		while (start < end)
		{
			result[i] = end;
			end--;
			i++;
		}
	}
	result[i] = end;

	return (result);
}
