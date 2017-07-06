/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:52:14 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/07 11:09:57 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sentinel;
	char	*pos;

	pos = (char*)s;
	sentinel = pos;
	while (*pos++)
		;
	pos--;
	while (pos >= sentinel)
		if (*(pos--) == c)
			return (++pos);
	return (NULL);
}
