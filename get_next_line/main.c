/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/10/20 15:02:32 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	int		bcount;
	char	*str;
	
	fd = open("text1.txt", O_RDONLY);
	bcount = read(fd, str, 200);
	str[bcount] = '\0';
	printf("Bites Leidos: %i \n", bcount);
}
