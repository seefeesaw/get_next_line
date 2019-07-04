/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashongwe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:04:52 by ashongwe          #+#    #+#             */
/*   Updated: 2019/06/29 06:38:41 by ashongwe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "get_next_line.h"
#include "libft/libft.h"

int main(int argc, char **argv)
{
	int fd;
	int ret;
	int line1;
	char *line;

	line1 = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			printf("[Return: %d] Line #%d: %s\n", ret, ++line1, line);
			free(line);
		}
		//printf("[Return: %d] Line #%d: %s\n", ret, ++line1, line);
		if (ret == -1)
			printf("Error\n");
		else if (ret == 0)
			printf("End of file\n");
		close(fd);
	}
	if (argc == 1)
	{
		while ((ret = get_next_line(0, &line)) > 0)
			printf("[Return: %d] Line #%d: %s\n", ret, ++line1, line);
		if (ret == -1)
			printf("Error\n");
		else if (ret == 0)
			printf("End of stdin\n");
		close(fd);
	}
	return (0);
}
