/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:11:11 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:12:12 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pt;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		pt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pt;
	}
	*lst = NULL;
}
