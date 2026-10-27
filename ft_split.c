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

char **ft_split(char const *s, char c)
{
	
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
