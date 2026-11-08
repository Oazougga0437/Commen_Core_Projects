/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:03:21 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:08:20 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*zn_cpy;
	const char	*second_src;

	zn_cpy = dest;
	second_src = src;

	if (!dest && !src)
    	return (NULL);
	while (n > 0)
	{
		*zn_cpy = *second_src;
		zn_cpy++;
		second_src++;
		n--;
	}
	return (dest);
}
