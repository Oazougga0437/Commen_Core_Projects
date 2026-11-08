/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:26:25 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 10:14:54 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i; 
	
    i = 0;
    if (n == 0)
        return (0);
    
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("ft: %d |
		orig: %d\n",
		ft_strncmp("Hello", "Hello", 5),
		strncmp("Hello", "Hello", 5));
	printf("ft: %d
		| orig: %d\n",
		ft_strncmp("Bonjour", "Bonsoir", 5),
		strncmp("Bonjour", "Bonsoir", 5));
	printf("ft: %d
		| orig: %d\n",
		ft_strncmp("ABC", "XYZ", 0),
		strncmp("ABC", "XYZ", 0));
	printf("ft: %d
		| orig: %d\n",
		ft_strncmp("Test", "Testing", 10),
		strncmp("Test", "Testing", 10));

	return (0);
}
*/
