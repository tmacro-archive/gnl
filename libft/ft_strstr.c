/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 09:31:10 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:14:14 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*pos;
	size_t	len;

	if (!*s2)
		return ((char*)s1);
	len = ft_strlen((char*)s2);
	pos = (char *)s1;
	while (*pos)
		if (ft_strncmp(pos, (char*)s2, len) != 0)
			pos++;
		else
			return (pos);
	return (NULL);
}
