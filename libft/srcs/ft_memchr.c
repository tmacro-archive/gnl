/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:42:27 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/06 13:33:36 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pos;

	pos = (unsigned char*)s;
	while (n--)
	{
		if (*pos == (unsigned char)c)
			return ((void*)pos);
		pos++;
	}
	return (NULL);
}
