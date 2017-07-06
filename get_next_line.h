/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:40:46 by tmckinno          #+#    #+#             */
/*   Updated: 2017/07/06 12:23:15 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 0 
# define MAX_FDS 1024

# include "libft.h"

typedef	struct	s_fd
{
	void		*content;
	size_t		content_size;
}				t_fd;

int				get_next_line(const int fd, char **line);
#endif
