/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:05:17 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/11 17:41:56 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   Localiza la primera aparición de la cadena terminada
   en nulo little en la cadena big, donde no se buscan
   más de len caracteres
 */
/**
 * Locates the first occurrence of the null-terminated string 'little'
 * in the string 'big', where not more than len characters are searched.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (i + j < len && big[i + j] && big[i + j] == little[j])
			j++;
		if (j == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
