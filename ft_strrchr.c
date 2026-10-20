/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:41:49 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/20 17:45:26 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
//
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	i = i - 1;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
// int	main (void)
// {
// 	char	*s = "mahsa";
// 	printf("%s\n", ft_strrchr(s, 'a'));
// 	printf("%s\n", ft_strrchr(s, '\0'));
// 	printf("%s\n", ft_strrchr(s, 'z'));
// 	printf("%s\n", strrchr(s, 'a'));
// 	printf("%s\n", strrchr(s, '\0'));
// 	printf("%s\n", strrchr(s, 'z'));
// }
