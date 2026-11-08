/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:50:42 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:53:07 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			len_s;
	unsigned int	i;
	unsigned int	j;
	char			*sub_str;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (len > 0)
	{
		sub_str[j] = s[i];
		i++;
		j++;
		len--;
	}
	sub_str[j] = '\0';
	return (sub_str);
}

/*
#include <stdio.h>
int main(){
	char *mystr = "hello oussama are you ok?";
	char *p = ft_substr(mystr, 6, 7);
	printf("my sub stirng is : %s", p);

}
*/
