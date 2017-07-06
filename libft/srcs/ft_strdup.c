/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:57:39 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/06 19:23:40 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*freshmeat;
	size_t	len;

	len = (ft_strlen((char*)s)) * sizeof(char);
	freshmeat = ft_strnew(len);
	if (freshmeat == NULL)
		return (NULL);
	ft_strcpy(freshmeat, s);
	return (freshmeat);
}
