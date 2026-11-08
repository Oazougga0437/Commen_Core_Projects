/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:10:38 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:12:52 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	const char	*pos;

	pos = s;
	if (c == 0)
	{
		while (*pos)
		{
			pos++;
		}
		return ((char *)pos);
	}
	else
	{
		while (*pos)
		{
			if ((unsigned char)*pos == (unsigned char)c)
			{
				return ((char *)pos);
			}
			pos++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(){
	char *str = "hellowords";

	char *rs = ft_strchr(str, 111);
	printf("le cart est; %c\n", *rs);
}
	*/
