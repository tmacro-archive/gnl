/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:50:43 by tmckinno          #+#    #+#             */
/*   Updated: 2017/07/06 09:40:41 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char *obs_fd[MAX_FDS];

void	buf_copy(char **dest, char *src, size_t len)
{
	char *tmp;
	char *trunc;

//	printf("buf_copy src: %s\n", src);
//	printf("buf_copy len: %lu\n", len);
	if (!**dest)
	{
		*dest = ft_strncpy(ft_strnew(len), src, len);
//		printf("buf_copy dest 1st: %s\n", *dest);
	}
	else
	{
		trunc = ft_strsub(src, 0, len);
		tmp = *dest;
		*dest = ft_strjoin(*dest, trunc);
		ft_strdel(&trunc);
		ft_strdel(&tmp);
//		printf("buf_copy dest: %s\n", *dest);
	}
}

int save_fd(const int fd, char *buf)
{
	size_t	len;
	char	*start;

	ERR_CNR((start = ft_strchr(buf, '\n')), NULL, 0);
	len = ft_strlen(start + 1);
	obs_fd[fd] = ft_strnew(len);
	ft_strcpy(obs_fd[fd], start + 1);
//	printf("saving extra read data: %s, len: %lu\n", start + 1, len);
	return (1);
}

void	load_fd(const int fd, char **buf)
{
	*buf = ft_strnew(BUFF_SIZE);
	if (obs_fd[fd])
	{
		ft_strcpy(*buf, obs_fd[fd]);
		ft_strdel(&obs_fd[fd]);
//		printf("loaded extra read data from fd: %s\n", *buf);
	}
}

int		parse_line(int fd, char **buf, char **line)
{
//	printf("parsing line\n");
	buf_copy(line, *buf, ft_strlen_d(*buf, '\n'));
	ERR_CNR(save_fd(fd, *buf), 1, 1);
	ft_bzero(*buf, BUFF_SIZE);
	return (0);
}


int		get_next_line(const int fd, char **line)
{
	char	*buf;
	int		bytes_read;

	ERR_CNR((fd < 0 || fd == 1 || fd == 2), 1, -1);
	ERR_CNR(line, NULL, -1);
	*line = ft_strnew(0);
	load_fd(fd, &buf);
	ERR_CNRF((parse_line(fd, &buf, line)), 1, 1, buf);
	while ((bytes_read = read(fd, buf, BUFF_SIZE)) > -2)
	{
		printf("read bytes: %i buf: %s\n", bytes_read, buf);
		ERR_CNRF(bytes_read, -1, -1, buf);
		BREAK(bytes_read, 0);
		ERR_CNRF(parse_line(fd, &buf, line), 1, 1, buf);
	}
	ERR_CNRF(**line, 0, 0, buf);
	return (1);
}
