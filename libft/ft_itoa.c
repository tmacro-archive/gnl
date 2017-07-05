/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 09:21:54 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/09 09:41:56 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int num)
{
	int digits;

	digits = 0;
	if (num < 0)
	{
		digits++;
		num = -num;
	}
	while (num > 0)
	{
		num = num / 10;
		digits++;
	}
	return (digits);
}

char		*ft_itoa(int n)
{
	char	*result;
	char	*pos;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = count_digits(n);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	pos = result;
	if (n < 0)
	{
		n = -n;
		*pos = '-';
	}
	pos += len - 1;
	while (n > 0)
	{
		*pos-- = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
