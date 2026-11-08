/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:22:18 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:24:05 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_noeud;

	new_noeud = (t_list *)malloc(sizeof(t_list));
	if (!new_noeud)
		return (NULL);
	new_noeud -> content = content;
	new_noeud -> next = NULL;
	return (new_noeud);
}
