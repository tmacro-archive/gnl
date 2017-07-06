/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:17:19 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 13:18:19 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*freshmeat;
	char	*pos1;
	char	*pos2;
	size_t	len;

	len = 0;
	NULL_GUARD((pos1 = (char*)s));
	pos2 = (char*)s;
	while (ft_isws(*pos1))
		pos1++;
	while (*pos2)
		pos2++;
	pos2--;
	while (ft_isws(*pos2))
		pos2--;
	len = pos2 - pos1 + 1;
	if (pos2 < pos1)
		return (ft_strnew(0));
	NULL_GUARD((freshmeat = ft_strnew(len)));
	ft_strncpy(freshmeat, pos1, len);
	return (freshmeat);
}
