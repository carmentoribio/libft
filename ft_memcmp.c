/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:42:44 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/13 23:01:37 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first n bytes (each interpreted as unsigned char) 
 * of the memory areas s1 and s2.
 * Returns an integer less than, equal to, or greater than zero 
 * if the first n bytes of s1 is found, respectively, to be less
 * than, to match, or be greater than the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (s1 == s2)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

/*
#include <stdio.h>
int main()
{
	printf("Expected: -40 Got: %d\n", 
	ft_memcmp("0x5tQYyFjJnDB28","X8hW9rqU", 2));
	printf("Expected: 2 Got: %d\n", 
	ft_memcmp("oVuMWaSxrgP9","mptLXSEPIgV", -23));
	printf("Expected: -1 Got: %d\n", 
	ft_memcmp("dPgGlX3a2my7oTS8","eZCOqW532lA7", 12));
	printf("Expected: 15 Got: %d\n", 
	ft_memcmp("AERUliwaf6m","2zRs", -38));
	printf("Expected: 17 Got: %d\n", 
	ft_memcmp("kM4g","ZrJ", -58));
	printf("Expected: 19 Got: %d\n", 
	ft_memcmp("LT7yMS9DFKUvWJz ","9u08B5zmchTyFwk", -7));
	printf("Expected: 24 Got: %d\n", 
	ft_memcmp("h6PSrFvkU0","Poh5ayKXpzsB2 ", -33));
}*/
