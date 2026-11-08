/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:16:22 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:23:52 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t destSize)
{
	size_t	i;
	size_t	j;
	size_t	len_des;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_des = 0;
	while (len_des < destSize && dest[len_des])
		len_des++;
	i = 0;
	j = len_des;
	while (src[i] && (j + 1) < destSize)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (len_des < destSize)
		dest[j] = '\0';
	return (len_des + len_src);
}
/*
#include <stdio.h>

int main() {

	char buffer[10] = "KooR";

	size_t needed = ft_strlcat( buffer, ".fr-demo", 10 );

	printf( "%s\n", buffer );
	printf( "taille necessaire : %zu\n", needed );

	return 0;
}

*/
