/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:00:17 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:02:18 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*pt1;
	unsigned const char	*pt2;

	pt1 = s1;
	pt2 = s2;
	while (n > 0)
	{
		if (*pt1 != *pt2)
		{
			return (*pt1 - *pt2);
		}
		pt1++;
		pt2++;
		n--;
	}
	return (0);
}
