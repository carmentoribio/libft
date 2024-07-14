/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:47:23 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/07 13:56:25 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If 'c' is a lowercase letter, it returns its uppercase equivalent.
 */
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}
