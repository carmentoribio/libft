/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:48:47 by ctoribio          #+#    #+#             */
/*   Updated: 2024/08/10 13:43:05 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list ’lst’ and applies the function ’f’ on the 
 * content of each node. Creates a new list resulting of the 
 * successive applications of the function ’f’. The ’del’ 
 * function is used to delete the content of a node if needed.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, node);
		lst = lst->next;
	}
	return (first);
}
