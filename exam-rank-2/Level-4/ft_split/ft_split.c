#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, char *org, int l)
{
	int	i;

	i = 0;
	while (i < l && org[i])
	{
		dst[i] = org[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	int	i;
	int	wc;
	int	s;
	int	e;
	int	k;
	char	**res;

	wc = 0;
	i = 0;
	s = 0;
	e = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_is_space(str[i]))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !ft_is_space(str[i]))
			i++;
	}
	i = 0;
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	while (str[i])
	{
		while (str[i] && ft_is_space(str[i]))
			i++;
		s = i;
		while (str[i] && !ft_is_space(str[i]))
			i++;
		e = i;
		if (s < e)
		{
			res[k] = (char *)malloc(sizeof(char) * (e - s + 1));
			ft_strncpy(res[k], &str[s], e - s);
			k++;
		}
		res[k] = NULL;
	}
	return (res);
}



int	main(void)
{
	int	i;
	char	*word;
	char	**words;

	i = 0;
	word = "test ste ste serrr";
	words = ft_split(word);
	while (i < 4)
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (0);
}