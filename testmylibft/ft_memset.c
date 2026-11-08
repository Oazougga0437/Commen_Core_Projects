/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:09:53 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/04 21:10:08 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pt;

	pt = s;
	while (n > 0)
	{
		*pt = c;
		pt++;
		n--;
	}
	return (s);
}
/*
int main(){
	char str[] = "Bonjour";
	printf("avant ; %s \n" ,str);

	ft_memset(str, 97, 3);
	printf("avant ; %s \n" ,str);

}
*/
/*
Le type de retour n'est pas void, mais void *.

La différence est importante :

void : la fonction ne retourne aucune valeur.

void * : la fonction retourne un pointeur, dont le type n'est pas spécifié.
*/
