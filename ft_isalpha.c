/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:02:06 by mahebrah          #+#    #+#             */
/*   Updated: 2026/09/29 19:56:11 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_isalpha(int c)
// {
//   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//   {
//     return(1);
//   }
//   else
//     return(0);
//     fakdsfjdsalkf
//
//
//     jfalksjdkf
// } 
int	ft_isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}
//
// #include <stdio.h>
//
// int	main(void)
// {
//   printf("%d", 1 >= 10);
//   printf("%d", ft_isalpha('H'));
//   printf("%d", ft_isalpha(25));
// }
