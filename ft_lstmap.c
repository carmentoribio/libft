/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:48:47 by ctoribio          #+#    #+#             */
/*   Updated: 2024/08/05 19:48:49 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&first, node);
		if (node == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (first);
}