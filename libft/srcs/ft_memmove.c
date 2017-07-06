/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 22:37:43 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/30 16:02:53 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	unsigned long	offset;
	int				direction;

	if ((unsigned long)s1 < (unsigned long)s2)
	{
		offset = 0;
		direction = 1;
	}
	else
	{
		offset = n - 1;
		direction = -1;
	}
	src = (unsigned char*)s2 + offset;
	dest = (unsigned char*)s1 + offset;
	while (n--)
	{
		*dest = *src;
		dest += direction;
		src += direction;
	}
	return (s1);
}
