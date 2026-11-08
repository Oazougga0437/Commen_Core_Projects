/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:15:13 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 18:07:30 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt;

	if (!lst)
	{
		return (NULL);
	}
	pt = lst;
	while (pt -> next)
	{
		pt = pt->next;
	}
	return (pt);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *head = NULL;
	t_list *last_node;

	// 1. On crée une liste chaînée
	// Si on ajoute "3", puis "2", puis "1" avec ft_lstadd_front :
	// La structure finale de la liste sera : "1" -> "2" -> "3"
	head = ft_lstnew("Troisieme (dernier)");
	ft_lstadd_front(&head, ft_lstnew("Deuxieme"));
	ft_lstadd_front(&head, ft_lstnew("Premier (tete)"));

	// 2. On teste ft_lstlast
	last_node = ft_lstlast(head);

	// 3. On vérifie le résultat
	if (last_node)
	{
		printf("Succes ! Le contenu du dernier element est :
		%s\n", (char *)last_node->content);
		// On s'attend à afficher "Troisieme (dernier)"
	}
	else
	{
		printf("Erreur : la fonction a retourne NULL pour une liste non vide.\n");
	}

	// 4. Test bonus : vérifier le comportement avec une liste vide (NULL)
	if (ft_lstlast(NULL) == NULL)
	{
		printf("Test liste vide : OK (retourne NULL sans crash)\n");
	}
	else
	{
		printf("Test liste vide : Erreur (devrait retourner NULL)\n");
	}

	return (0);
}
	*/
