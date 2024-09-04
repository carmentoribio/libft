/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:24:33 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/14 16:38:31 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new node using malloc.
 * Variable 'content' is initialized with the content of the 
 * parameter 'content'. Variable 'next' is initialized with 'NULL'.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
/*
#include <stdio.h>
int main()
{
	t_list *messi = ft_lstnew((void *)2);
	printf("%p\n", messi->content);
}*/