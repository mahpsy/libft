/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:53:13 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/14 19:50:08 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// int main(void)
// {
// 	// char str[] = "";
// 	// char strr[] = "";
// 	char	*str = NULL;
// 	char	*strr = NULL;
// 	printf("%s", (char*) ft_memcpy(str, strr, 2));
// }
//
//
	// if (!dest && !src)
	// {
	// 	return(NULL);
	// }
