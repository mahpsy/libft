/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:15:28 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/17 23:42:39 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	s[] = "mahsaispretty";
// 	char	s2[] = "hotaff";
// 	char	s3[] = "mahsaishotaf";
// 	printf("%zu\n", ft_strlcpy(s, s2, 5));
// 	printf("%s\n", s);
// 	printf("%zu\n", strlcpy(s, s2, 5));
	// printf("%s\n", (char *) ft_strlcpy(s3, s3 + 5, 5));
	// printf("%s\n", (char *) strlcpy(s + 5, s, 5));
	// printf("%s", (char*) ft_memmove(dest, src, 2));
// }
