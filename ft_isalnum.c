/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 21:37:00 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/05 21:03:58 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	printf("%d", ft_isalnum(5));
// 	printf("%d", ft_isalnum('a'));
// 	printf("%d", ft_isalnum('Z'));
// 	printf("%d", ft_isalnum(43));
// 	printf("%d", ft_isalnum('$'));
// }
