/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:15:19 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:15:45 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = (char *)malloc((len * sizeof(char)) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}
/*
#include <stdio.h>

int main ()
{
	char *sr = "bonjorno";

	char *cpy = ft_strdup(sr);

	printf("my copy ; %s\n", cpy);
	printf("my copy ; %zu\n", ft_strlen(cpy));


}
*/
