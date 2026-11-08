/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:47:47 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:50:12 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len_s1;
	size_t	i;
	size_t	j;
	char			*strtrim;

	if (!s1 || !set)
		return (NULL);	
	i = 0;
	len_s1 = ft_strlen(s1);
	j = len_s1 - 1;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
	{
		i++;
	}
	while (s1[i] && ft_strchr(set, s1[j]) != 0)
	{
		j--;
	}
	strtrim = ft_substr(s1, i, j - i + 1);
	return (strtrim);
}
/*
#include <stdio.h>
int main(void)
{
	char *rest;

	// Test 1 : Ton exemple (caractères au début et à la fin, milieu intact)
	rest = ft_strtrim("vvvvvvvvhello  vv oussamavvvvvvv", "v");
	printf("Test 1 : [%s]\n", rest);
	free(rest);

	// Test 2 : Set avec plusieurs caractères (tirets et espaces)
	rest = ft_strtrim("---   Hello World   ---", "- ");
	printf("Test 2 : [%s]\n", rest);
	free(rest);

	// Test 3 : Rien à supprimer (la chaîne reste identique)
	rest = ft_strtrim("Hello", "x");
	printf("Test 3 : [%s]\n", rest);
	free(rest);

	// Test 4 : Chaîne entièrement composée du set (doit renvoyer vide "")
	rest = ft_strtrim("xxxxxx", "x");
	printf("Test 4 : [%s]\n", rest);
	free(rest);

	// Test 5 : Chaîne d'origine vide
	rest = ft_strtrim("", "x");
	printf("Test 5 : [%s]\n", rest);
	free(rest);

	// Test 6 : Set vide
	rest = ft_strtrim("Hello", "");
	printf("Test 6 : [%s]\n", rest);
	free(rest);

	return (0);
}
*/
