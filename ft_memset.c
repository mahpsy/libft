/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:53:32 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/07 21:34:58 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
//
// int main(void)
// {
// 	char str[] = "mahsa";
// 	printf("%s", (char*) ft_memset(str, 60, 2));
// }
//
// void *ft_memset(void *s, int c, size_t n)
// {
// 	size_t	i;
// 	char *a;
//
// 	a = (char*) s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		a[i] = c;
// 		i++;
// 	}
// 	return (s);
// }
//
// int	main(void)
// {
// 	char str[] = "hahah";
// 	printf("%s\n",(char*) ft_memset(str, 60, 2));
// }
