/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 09:31:10 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:33:40 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*pos;
	size_t	len;

	if (!*s2)
		return ((char*)s1);
	len = ft_strlen((char*)s2);
	pos = (char *)s1;
	while (n && *pos)
	{
		if (len > n)
			break ;
		if (ft_strncmp(pos, (char*)s2, len) == 0)
			return (pos);
		else
			pos++;
		n--;
	}
	return (NULL);
}
