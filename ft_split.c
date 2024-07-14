/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoribio <ctoribio@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:51:29 by ctoribio          #+#    #+#             */
/*   Updated: 2024/07/12 12:43:34 by ctoribio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		free(matrix[i++]);
	free(matrix);
}

/**
 * Returns a pointer to the following non-separator character of the string.
 */
const char	*skip_separator(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

/**
 * Returns the number of words in the string 's'.
 */
int	word_count(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (*s)
	{
		s = skip_separator(s, c);
		if (*s)
			wc++;
		while (*s && *s != c)
			s++;
	}
	return (wc);
}

/**
 * Returns the length of a word.
 */
int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/**
 * Reserves an array of strings resulting from separating the 
 * string 's' into substrings using the character 'c' as a delimiter.
 */
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wc;
	int		wl;
	int		i;

	wc = word_count(s, c);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s && i < wc)
	{
		s = skip_separator(s, c);
		wl = word_len(s, c);
		res[i] = (char *)malloc(wl + 1);
		if (res[i] == NULL)
			return (free_matrix(res), (NULL));
		ft_strlcpy(res[i], s, wl + 1);
		s += wl;
		i++;
	}
	res[i] = NULL;
	return (res);
}
