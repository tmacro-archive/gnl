/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:14:32 by tmckinno          #+#    #+#             */
/*   Updated: 2017/06/11 12:37:03 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstapp(t_list **l, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*l);
	if (last == NULL)
		*l = new;
	else
		last->next = new;
}
