/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 19:29:52 by yzisis-p         ###   ########.fr       */
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