/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:37:55 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 11:21:05 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;
	size_t		nbr;

	nbr = ft_strlen(s);
	pos = s + nbr;
	while (pos > s)
	{
		if ((unsigned char)*pos == (unsigned char)c)
			return ((char *)pos);
		pos--;
	}
	if ((unsigned char)*pos == (unsigned char)c)
		return ((char *)pos);
	return (NULL);
}
