/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:37:44 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/20 18:35:44 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
// #include <string.h>
// int	main (void)
// {
// 	char	*s = "mahsa";
// 	printf("%s\n", ft_strchr(s, 'a'));
// 	printf("%s\n", ft_strchr(s, '\0'));
// 	printf("%s\n", ft_strchr(s, 'z'));
// 	printf("%s\n", strchr(s, 'a'));
// 	printf("%s\n", strchr(s, '\0'));
// 	printf("%s\n", strchr(s, 'z'));
// }
