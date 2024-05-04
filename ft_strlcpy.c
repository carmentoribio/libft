/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:27:10 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/04 15:07:49 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
	{
		memcpy(dest, src, src_len + 1);
	}else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size] = '\0';
	}

	return (src_len);
}
