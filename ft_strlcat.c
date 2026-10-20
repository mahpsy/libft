/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:50:26 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/19 20:01:43 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst);
	if (i > size)
		return (size + ft_strlen(src));
	ft_strlcpy(dst + i, src, size - i);
	return (i + ft_strlen(src));
}
//
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	s1[99] = "mahsa is ";
// 	char	s2[] = "hot af!!!";
// 	char	s3[99] = "mahsa is ";
// 	printf("%zu\n", ft_strlcat(s1, s2, 10));
// 	printf("%s\n", s1);
// 	printf("%zu\n", strlcat(s3, s2, 10));
// 	printf("%s\n", s3);
// }
