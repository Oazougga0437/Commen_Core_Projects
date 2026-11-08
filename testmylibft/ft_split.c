/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:33:51 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:37:53 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_of_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	*free_array(char **split, int j)
{
	while (j >= 0)
	{
		free(split[j]);
		j--;
	}
	free(split);
	return (NULL);
}

static int	fill_words(char **split, char const *s, char c)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = 0;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		split[j] = ft_substr(s, i - len, len);
		if (!split[j])
		{
			free_array(split, j - 1);
			return (0);
		}
		j++;
	}
	split[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((nb_of_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_words(split, s, c))
		return (NULL);
	return (split);
}


/*
#include <stdio.h>

int main(void)
{
	char *s = ",,,hello,,world,,42,";
	char c = ',';
	char **mysplit = ft_split(s,c);
	int i = 0 ;
	while (mysplit[i])
	{
		printf("str[%d]: %s\n",i, mysplit[i]);
		i++;
	}


	return 0;
}
*/
