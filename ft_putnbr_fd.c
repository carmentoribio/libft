/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:37:46 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/13 16:02:56 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sends the digit 'n' to the specified file descriptor 'fd'.
 */
void	write_digit(int n, int fd)
{
	char	c;

	c = n + '0';
	write(fd, &c, 1);
}

/**
 * Sends the number 'n' to the specified file descriptor 'fd'.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		write_digit(n % 10, fd);
	}
}
