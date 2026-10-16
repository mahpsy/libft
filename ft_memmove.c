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
// #include <stdio.h>

static void	*ft_memcpy_reverse(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		((char *) dest)[i] = ((char *) src)[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
	{
		return(dest);
	}
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
// #include <string.h>
// int main(void)
// {
// 	char str[] = "mahsa";
// 	char	*src = &str[0];
// 	char	*dest = &str[2];
//
// 	char	s[] = "mahsaishotaf";
// 	printf("%s\n", (char *) memmove(s, s + 5, 5));
// 	printf("%s\n", (char *) memmove(s + 5, s, 5));
// 	printf("%s\n", (char *) ft_memmove(s, s + 5, 5));
// 	printf("%s\n", (char *) ft_memmove(s + 5, s, 5));
// 	printf("%s", (char*) ft_memmove(dest, src, 2));
// }

