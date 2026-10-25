/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:33:02 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/21 21:32:28 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] == 0 || s2[i] == 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
		{
			i++;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	s1[] = "mahsaispretty";
// 	char	s2[] = "hotaff";
// 	char	s3[] = "mahsaishotaf";
// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// 	printf("%d\n", strncmp(s1, s2, 5));
// 	printf("%d\n", ft_strncmp(s1, s2 , 2));
// 	printf("%d\n", strncmp(s1, s2, 2));
// 	printf("%d\n", ft_strncmp(s1, s3, 10));
// 	printf("%d\n", strncmp(s1, s3, 10));
// }
