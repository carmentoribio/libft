/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:13:33 by ctoribio          #+#    #+#             */
/*   Updated: 2024/03/26 12:55:39 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Takes integer as an argument. Character is passed to the function. 
 * Internally, the character is converted to its ASCII value for the check.
 */
int	ft_isdigit(int n)
{
	if (n >= 48 && n <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isdigit('9'));
}*/
