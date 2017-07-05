/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:32:57 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 13:23:31 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	ERR_CNR(s1, NULL, 0);
	ERR_CNR(s2, NULL, 0);
	return (ft_strncmp(s1, s2, n) == 0);
}
