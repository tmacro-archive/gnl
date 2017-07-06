/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:33:25 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/09 13:54:44 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_d(char const *s, char delim)
{
	char	*pos;
	int		len;

	pos = (char*)s;
	len = 0;
	while (*pos && *pos != delim)
	{
		pos++;
		len++;
	}
	return (len);
}
