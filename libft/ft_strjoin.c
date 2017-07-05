/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:48:28 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 13:20:04 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*freshmeat;

	NULL_GUARD(s1);
	NULL_GUARD(s2);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	NULL_GUARD((freshmeat = ft_strnew(len)));
	ft_strcat(freshmeat, s1);
	ft_strcat(freshmeat, s2);
	return (freshmeat);
}
