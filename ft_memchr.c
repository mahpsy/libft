/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 23:30:07 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/21 23:53:23 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			i++;
		}
		else
			return (str + i);
	}
	return (str + i);
}

