/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:27:25 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/28 16:27:27 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int    yz_wordcount(char const *s, char c)
{
	int     i;
	int     ctr;

	i = 0;
	ctr = 1;
	while (s[i] != '\0')
	{
		i = i + 1;
		if (s[i] == c)
		ctr++;
	}
	return (ctr);
}

int	yz_wordleng(char const *s, char c, int *i2)
{
	int     i;

	i = 0;
	while (s[*i2] != c && s[*i2] != '\0')
	{
		i++;
		(*i2)++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int     i;
	int     i2;
	int     i3;
	int     wc;
	int     wp;
	char	**newset;

	i = 0;
	i2 = 0;
	wc = yz_wordcount(s, c);
// 	printf ("Wordcount: %d\n", yz_wordcount(s, c));
	newset = (char **)malloc((wc + 1) * sizeof(char *));
	while (i < wc)
	{
		newset[i] = (char *)malloc((yz_wordleng(s, c, &i2) + 1) * sizeof(char));
// 		printf ("I2 is: %d\n", i2);
		i++;
		i2 = i2 + 1;
	}
	newset[i] = NULL;
	if (!newset)
		return (NULL);
	i = 0;
    i2 = 0;
    i3 = 0;
    wp = 0;
//     printf ("WC is: %d\n", wc);
    while (i < wc - 1)
    {
// 		printf ("Delimeter count %d\n", c);
// 		printf ("WordNumber is: %d\n", i);
// 		printf ("WordCount is: %d\n", wc);
        while (s[i3] != ',')
        {
// 			wp = yz_wordleng(s, c, &i2);
// 			printf ("Next word Position(I22) is: %d\n", i2 + 1);
			newset[i][i2] = s[i3];
			printf ("NewSet1 is: %s\n", newset[0]);
		   	printf ("NewSet2 is: %s\n", newset[1]);
		   	printf ("NewSet3 is: %s\n", newset[2]);
		   	printf ("NewSet4 is: %s\n", newset[3]);
		   	printf ("NewSet5 is: %s\n", newset[4]);
		   	i2++;
		   	i3++;
		}
		i++;
		i2 = 0;
		i3++;
//		printf ("I3 is: %d\n", i3);
    }
    if (i == wc - 1)
    	newset[i][i2] = s[i3];
    	printf ("WC is: %d\n", wc);
    return (newset);
}

int    main(void)
{
	char const      *s;
    char            c;

    s = "92,13,15,205,9";
    c = ',';
    ft_split(s, c);
}

// No newline at end of file
/*  ft_split = [[12][13][15][205][9]] */
/*     printf ("Position: %d\n", i2); */
/*     newset[i][(yz_wordleng(s, c, &i2)] = s[i]; */
/*     printf ("Char: %c\n", *newset[0]); */
//  OLD
// int	yz_delcnt(char const *s, char c)
// {
// 	int	i;
// 	int	ctr;
// 
// 	i = 0;
// 	ctr = 1;
// 	while (s[i] != '\0')
// 	{
// 		i = i + 1;
// 		if (s[i] == c)
// 			ctr++;
// 	}
// 	return (ctr);
// }
// 
// int	yz_wordleng(char const *s, char c, int *i2)
// {
// 	int	i;
// 
// 	i = 0;
// 	while (s[*i2] != c && s[*i2] != '\0')
// 	{
// 		i++;
// 		(*i2)++;
// 	}
// 	return (i);
// }
// 
// int	yz_dp(char const *s, char c)
// {
// 	int	i;
// 
// 	i = 0;
// 	while (s[i] != c)
// 	{
// 		i = i + 1;
// 	}
// 	return (i);
// }
// 
// char	**ft_split(char const *s, char c)
// {
// 	int		i;
// 	int		i2;
// 	int		i3;
// 	int		dc;
// 	int		dp;
// 	int		wl;
// 	int		wp;
// 	char	**newset;
// 
// 	i = 0;
// 	i2 = 0;
// 	dc = yz_delcnt(s, c);
// 	printf ("I2 is: %d\n", i2 + 1);
// 	newset = (char **)malloc((dc + 1) * sizeof(char *));
// 	while (i < dc)
// 	{
// 		newset[i] = (char *)malloc((yz_wordleng(s, c, &i2) + 1) * sizeof(char));
// 		i++;
// 		i2 = i2 + 1;
// 	}
// 	newset[i] = NULL;
// 	if (!newset)
// 		return (NULL);
// 	i = 0;
// 	i2 = 0;
// 	i3 = 0;
// 	wp = 0;
// 	while (i < dc)
// 	{
// 		wl = yz_wordleng(s, c, &i2) + 1;
// 		printf ("I is: %d\n\n", i);
// 		while (i3 < wl)
// 		{
// 			dp = yz_dp(s, c);
// 			newset[i][i3] = s[wp];
// 			printf ("I2 is: %d\n", i2 + 1);
// 			printf ("WordLenght: is: %d\n", wl);
// 			printf ("NewSet1 is: %s\n", newset[0]);
// 			i3++;
// 			wp++;
// 		}
// 		i++;
// 		i2 = 0;
// 		i3 = 0;
// 		wp = dp + wl;
// 	}
// 	return (newset);
// }
// 
// int	main(void)
// {
// 	char const	*s;
// 	char		c;
// 
// 	s = "92,133,15,205,90";
// 	c = ',';
// 	ft_split(s, c);
// }
// 
// /*  ft_split = [[12][13][15][205][9]] */