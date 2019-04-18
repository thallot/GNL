/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:42:30 by thallot           #+#    #+#             */
/*   Updated: 2019/04/11 15:50:45 by thallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		reader;
	char	*line;

	reader = 1;
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 3 && fd != 0)
			return (-1);
		while (reader)
		{
			reader = get_next_line(fd, &line);
			printf("reader : %d - %s\n", reader, line);
			free(line);
		}
	}
	return (0);
}
