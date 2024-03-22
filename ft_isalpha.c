/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:57:18 by ctoribio          #+#    #+#             */
/*   Updated: 2024/03/22 21:48:24 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks whether a character is an alphabet (a to z and A-Z) or not
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_isalpha('Z');
	printf("%d", i);
}*/
