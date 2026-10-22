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
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] != (unsigned char)c)
		{
			i++;
		}
		else
			return (str + i);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main (void)
// {
// 	char	*s = "mahsa";
// 	printf("%s\n", (char *)ft_memchr(s, 'a', 5));
// 	printf("%s\n", (char *)ft_memchr(s, '\0', 6));
// 	printf("%s\n", (char *)ft_memchr(s, 'z', 5));
// 	printf("%s\n", (char *)memchr(s, 'a', 5));
// 	printf("%s\n", (char *)memchr(s, '\0', 6));
// 	printf("%s\n", (char *)memchr(s, 'z', 5));
// }
