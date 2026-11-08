/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:38:57 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:40:09 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void upg(unsigned int, char *c)
{

	*c = *c + 3;
}

int main()
{
	char s[] = "aaaa";

	ft_striteri(s, upg);

	printf("new string : %s\n", s);
}
*/
