/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:38:07 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 11:37:39 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			j++;
		}
		else
		{
			i = i - j;
			j = 0;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + (i - j + 1));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	const char *big = "Foo Bar Baz";

	// Test 1 : Trouvé dans la limite
	printf("Test 1 (Trouvé) : %s\n",
	ft_strnstr(big, "Bar", 10)); // Attendu : "Bar Baz"

	// Test 2 : Little vide (doit retourner big en entier)
	printf("Test 2 (Little vide) : %s\n",
	 ft_strnstr(big, "", 10)); // Attendu : "Foo Bar Baz"

	// Test 3 : Trop loin par rapport à len (doit retourner (nil))
	printf("Test 3 (Hors limite) : %p\n",
	(void *)ft_strnstr(big, "Bar", 4)); // Attendu : (nil)

	// Test 4 : Absent de big (doit retourner (nil))
	printf("Test 4 (Absent) : %p\n",
	(void *)ft_strnstr(big, "Hello", 10)); // Attendu : (nil)

	return (0);
}
*/
