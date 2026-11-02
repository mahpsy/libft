/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:37:39 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/06 22:51:59 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// ft_strlen(const char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (*str)
// 	{
// 		str = str + 1;
// 		i++;
// 	}
// 	return (i);
// }
//
//
// int	main(void)
// {
// 	printf("%zu", ft_strlen("mah"));
// 	printf("%zu", ft_strlen("3710"));
// 	printf("%zu", ft_strlen("Z"));
// 	printf("%zu", ft_strlen("bro"));
// 	printf("%zu", ft_strlen("$"));
// }
