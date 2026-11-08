/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:17:23 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:22:11 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*pt1;
	t_list	*temp_elem;
	void	*new_content;

	new_lst = NULL;
	pt1 = lst;
	if (!lst || !f || !del)
	{
		return (NULL);
	}
	while (pt1)
	{
		new_content = f(pt1->content);
		temp_elem = ft_lstnew(new_content);
		if (!temp_elem)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp_elem);
		pt1 = pt1 ->next;
	}
	return (new_lst);
}
