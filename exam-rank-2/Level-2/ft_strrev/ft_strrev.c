#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	l;
	int	i;
	char	t;

	i = 0;
	l = 0;
	while (str[l])
		l++;
	while (i < l / 2)
	{
		t = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = t;
		i++;
	}
	return (str);
}
