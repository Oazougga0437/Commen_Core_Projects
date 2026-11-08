/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:24:13 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:25:22 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	cpt;
	t_list			*pt;

	cpt = 0;
	pt = lst;
	while (pt)
	{
		cpt++;
		pt = pt->next;
	}
	return (cpt);
}
