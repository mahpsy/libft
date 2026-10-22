/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:54:20 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/22 19:09:47 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	s1[] = "";
// 	char	s2[] = "";
// 	char	s3[] = "mahsaishotaf";
// 	printf("%d\n", ft_memcmp(s1, s2, 0));
// 	printf("%d\n", memcmp(s1, s2, 0));
// 	printf("%d\n", ft_memcmp(s1, s2 , 2));
// 	printf("%d\n", memcmp(s1, s2, 2));
// 	printf("%d\n", ft_memcmp(s1, s3, 10));
// 	printf("%d\n", memcmp(s1, s3, 10));
// }
