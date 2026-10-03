/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:08:26 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/01 16:08:40 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= 0 && c <= 9);
}

// #include <stdio.h>
//
// int	main(void)
// {
//   printf("%d", 1 >= 10);
//   printf("%d", ft_isdigit('H'));
//   printf("%d", ft_isdigit(2));
// }
