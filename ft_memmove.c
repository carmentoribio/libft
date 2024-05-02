/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:26:34 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/02 19:24:44 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   If dest pointer in memory is before (<) src pointer, we can copy as expected
   If dest pointer is after (>) src pointer, we have to start copying from the
   last byte of dest on the last byte of src to avoid overlaping src over dest
   and, therefore, losing information.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
