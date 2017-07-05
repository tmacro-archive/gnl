/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 15:27:54 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/06 16:18:45 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	src = (unsigned char*)s2;
	dest = (unsigned char*)s1;
	n += 1;
	while (--n)
		if (*src)
			*dest++ = *src++;
		else
			break ;
	if (n != 0)
		ft_bzero(dest, n);
	return (s1);
}
