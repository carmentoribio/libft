/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:26:34 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/04 15:03:05 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_forward(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	copy_from_end(unsigned char *dest, unsigned char *src, size_t n)
{
	while (n-- != 0)
	{
		dest[n] = src[n];
	}
}

/*
   If dest pointer in memory is before (<) src pointer, we can copy as expected
   If dest pointer is after (>) src pointer, we have to start copying from the
   last byte of dest on the last byte of src to avoid overlaping src over dest
   and, therefore, losing information.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
		return (dest);
	if (dest <= src)
		copy_forward((unsigned char *)dest, (unsigned char *)src, n);
	else
		copy_from_end((unsigned char *)dest, (unsigned char *)src, n);
	return (dest);
}
