/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 14:54:40 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/05 17:40:06 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	while (n-- != 0)
		*dest++ = *src++;
	return (s1);
}
