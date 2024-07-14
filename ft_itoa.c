/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:43:50 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/13 22:54:47 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of necessary characters to represent 'n',
 * including the negative sign.
 */
int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

/**
 * Using malloc, it generates a string that represents the integer 'n'.
 * It can manage negative numbers.
 */
char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[i++] = '-';
		n *= -1;
	}
	res[len--] = '\0';
	while (len >= i)
	{
		res[len] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	return (res);
}
