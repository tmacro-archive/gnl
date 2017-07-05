/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:42:53 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/06 20:50:05 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pos;

	pos = (char*)s;
	while (*pos || *pos == (char)c)
		if (*pos++ == (char)c)
			return (--pos);
	return (NULL);
}
