/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:47:32 by bmoll-pe          #+#    #+#             */
/*   Updated: 2022/11/09 19:46:09 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		bcount;
	char	*str;

	fd = open("text1.txt", O_RDONLY);
	bcount = 0;
	str = "0";
	while (str)
	{
		str = get_next_line(fd);
		if (str != NULL)
			printf("Line actual: %s \n", str);
		else
			return (0);
		bcount++;
	}
}

int	main(void)
{
	char	*str;

	str = "123";
}