/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:16:10 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/27 23:57:21 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	isword(char const *s, char c);
static char		**isfree(char **str, size_t j);
static char		**makewords(char **str, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc((isword(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (makewords(str, s, c));
}

static size_t	isword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**isfree(char **str, size_t j)
{
	while (j > 0)
	{
		j--;
		free(str[j]);
	}
	free(str);
	return (NULL);
}

static char	**makewords(char **str, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = ft_substr(s, start, i - start);
		if (!str[j])
			return (isfree(str, j));
		j++;
	}
	str[j] = NULL;
	return (str);
}
// counting the amount of words
// c is not part of the word
// words are at least 1 character long
//
// alloc the amount of words as a pointer to array of strings
//
// alloc each individual word one by one
// strlcpy the word into the alloced 
//
// if any alloc fails, free the previous words one by one
// free the main array, then return null
