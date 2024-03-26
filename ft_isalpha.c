/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:16:15 by ctoribio          #+#    #+#             */
/*   Updated: 2024/03/26 17:07:56 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Checks whether a character is an alphabet (a to z and A-Z) or not
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
