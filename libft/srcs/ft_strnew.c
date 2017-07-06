/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 14:20:17 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/05 22:31:27 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*freshmeat;

	freshmeat = ft_memalloc(size + sizeof(char));
	if (freshmeat == NULL)
		return (NULL);
	ft_bzero(freshmeat, size + sizeof(char));
	return (freshmeat);
}
