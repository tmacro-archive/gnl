/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 21:42:42 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:36:08 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *s)
{
	intmax_t	res;
	int			sign;
	char		*pos;

	pos = (char*)s;
	sign = 1;
	res = 0;
	while (*pos == ' ' || (*pos >= 9 && *pos <= 13))
		pos++;
	if (*pos == '-')
		sign = -1;
	if (*pos == '+' || *pos == '-')
		pos++;
	pos--;
	while (*++pos)
		if (ft_isdigit(*pos))
			res = res * 10 + (*pos - '0');
		else
			break ;
	res *= sign;
	return ((int)res);
}
