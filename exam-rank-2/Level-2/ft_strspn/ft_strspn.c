#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (accept[k] == s[i])
		{
			i++;
			k++;
		}
		else
			return (i);
	}
	return (i);
}
