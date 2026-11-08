/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:44:58 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:46:49 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len_org;
	unsigned int	i;
	char			*new_s;

	if (!s || !f)
		return (NULL);
	len_org = ft_strlen(s);
	new_s = (char *)malloc((len_org + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*
#include <stdio.h>

char transf(unsigned int i, char c){
	(void)i;
	c = c + 5 ;

	return c;
}

int main (){
	char *sr = "aaaaaaaaabbaa";

	char *new_ch = ft_strmapi(sr, transf);

	printf("new string : %s", new_ch);
}
*/
