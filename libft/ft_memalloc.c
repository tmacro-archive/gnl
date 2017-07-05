/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 09:11:05 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/05 22:30:05 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = (void*)malloc(sizeof(void) * size);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
