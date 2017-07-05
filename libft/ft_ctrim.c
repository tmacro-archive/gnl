/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctrim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 21:18:59 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/08 21:19:13 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctrim(char const *s, char c)
{
	char	*freshmeat;
	char	*pos1;
	char	*pos2;
	size_t	len;

	len = 0;
	pos1 = (char*)s;
	pos2 = (char*)s;
	while (*pos1 == c)
		pos1++;
	while (*pos2)
		pos2++;
	pos2--;
	while (*pos2 == c)
		pos2--;
	len = pos2 - pos1 + 1;
	if (pos2 < pos1)
		return (ft_strnew(0));
	freshmeat = ft_strnew(len);
	if (freshmeat == NULL)
		return (NULL);
	ft_strncpy(freshmeat, pos1, len);
	return (freshmeat);
}
