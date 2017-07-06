/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:37:42 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/06 13:56:46 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	size_t	len;

	len = (ft_strlen((char*)s2) + 1) * sizeof(char);
	ft_memcpy(s1, s2, len);
	return (s1);
}
