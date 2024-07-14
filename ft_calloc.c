/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:05:34 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/11 19:30:52 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates  memory for an array of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.  The memory is set to zero.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	int		total;

	total = (int)(nmemb * size);
	res = malloc(total);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}
