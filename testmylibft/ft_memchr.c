/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 20:57:34 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 20:59:51 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;

	ptr = s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((unsigned char *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}
