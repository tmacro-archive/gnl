/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 16:14:32 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 13:17:02 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcnt(char const *s, char c)
{
	char	*pos;
	int		count;

	pos = ft_ctrim(s, c);
	if (pos == NULL)
		return (-1);
	count = 0;
	while (*pos)
	{
		if (*pos == c)
		{
			count++;
			pos++;
			while (*pos == c)
				pos++;
		}
		pos++;
	}
	return (count + 1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**results;
	char	**rpos;
	char	*pos;
	int		len;

	NULL_GUARD((pos = (char*)s));
	ERR_CHECK((len = ft_splitcnt(s, c) + 1), -1);
	NULL_GUARD((results = (char**)ft_memalloc(len * sizeof(char*))));
	rpos = results;
	while (*pos)
	{
		if (*pos != c)
		{
			NULL_GUARD((*rpos = ft_strnew_d(pos, c)));
			pos += ft_strlen(*rpos);
			rpos++;
		}
		else
			pos++;
	}
	*rpos = 0;
	return (results);
}
