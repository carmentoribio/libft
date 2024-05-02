/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:27:10 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/02 20:44:50 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char		*end;
	char		*d;
	const char	*s;

	end = dest + size;
	d = dest;
	s = src;
	while (*s != '\0' && d < end)
	{
		*d++ = *s++;
	}
	if (d < end)
		*d = '\0';
	else
		d[-1] = '\0';
	while (*s != '\0')
		s++;
	return ((size_t)(s - src));
}
