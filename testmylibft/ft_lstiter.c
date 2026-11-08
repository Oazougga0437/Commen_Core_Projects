/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:14:19 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:14:47 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pt;

	if (!lst || !f)
	{
		return ;
	}
	pt = lst;
	while (pt)
	{
		f(pt -> content);
		pt = pt -> next;
	}
}
