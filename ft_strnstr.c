/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 19:08:59 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/22 23:13:08 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t lil;

	lil = strlen(little);
	i = 0;
	if (!little[0])
	{
		return(big);
	}
	if (lil > len)
	{
		return (NULL);
	}
	while (big[i] && len)
	{
		
	}
	
	/*
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j])
		if (big[i + j] == little[j])
		{
			i++;
		}
		else
		i++;
		j++;
	}
	*/ 
	// return (big);
}
