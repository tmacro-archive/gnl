/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 10:10:18 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:50:54 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	c = '\0';
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	else
	{
		c = (n % 10) + 48;
		n /= 10;
	}
	if (n > 0)
		ft_putnbr_fd(n, fd);
	if (c)
		ft_putchar_fd(c, fd);
}
