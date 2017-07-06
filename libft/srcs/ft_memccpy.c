/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 15:20:27 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:41:24 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, void const *s2, int c, size_t n)
{
	void		*pos;
	size_t		len;

	ERR_CNR(n, 0, NULL);
	pos = ft_memchr(s2, c, n);
	if (pos == NULL)
		len = n;
	else
		len = ++pos - s2;
	ft_memcpy(s1, s2, len);
	if (pos != NULL)
		return (s1 + len);
	return (NULL);
}
