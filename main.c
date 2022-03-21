/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brickard <brickard@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:23:22 by brickard          #+#    #+#             */
/*   Updated: 2021/12/26 20:32:54 by brickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*str;

	i = 5;
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		fd = 0;
	while (i--)
	{
		str = get_next_line(fd);
		printf("%s", str);
	}
	close(fd);
	return (0);
}
