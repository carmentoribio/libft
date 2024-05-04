/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:16:55 by ctoribio          #+#    #+#             */
/*   Updated: 2024/05/02 15:40:24 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Takes integer as an argument. Character is passed to the function. 
 * Internally, the character is converted to its ASCII value for the check.
 */
int	ft_isdigit(int n)
{
	if ('0' <= n && n <= '9')
		return (1);
	return (0);
}
