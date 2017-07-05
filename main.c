/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:34:31 by tmckinno          #+#    #+#             */
/*   Updated: 2017/07/05 14:29:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	int fd;
	int ac;
	char **av;
	char *buf;
	int x;

	ac = argc;
	av = argv;
	buf = (char*)malloc(sizeof(char) * 512);
	fd = open("test2.txt", O_RDONLY, S_IREAD);
	while ((x = get_next_line(fd, &buf)) != 0)
	{
		printf("ret code: %i\n", x);
		printf("ret line: %s\n", buf);
	}
	free(buf);
	close(fd);
	return (0);
}
