/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:10:46 by ctoribio          #+#    #+#             */
/*   Updated: 2024/03/28 20:22:59 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * fills the first len bytes of the memory area pointed to by dest with the
 * constant byte c
 */
void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i != len)
	{
		((unsigned char *) dest)[i] = c;
		i++;
	}
	return (dest);
}
