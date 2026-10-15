/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:28:07 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/14 19:50:04 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static void	*ft_memcpy_reverse(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n - 1;
	while (i >= 0)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i--;
	}
	return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		ft_memcpy_reverse(dest, src, n);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
