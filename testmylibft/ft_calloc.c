/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:15:43 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 11:15:53 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*call;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	call = (char *)malloc(nmemb * size);
	if (!call)
		return (NULL);
	ft_memset(call, 0, nmemb * size);
	return (call);
}
/*
#include <stdio.h>

int main ()
{
	int *tab = ft_calloc(5,sizeof(int));

	int i = 0;

	while (i < 5) {
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
*/
