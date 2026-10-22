/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:23:46 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/22 22:15:26 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (SIZE_MAX / nmemb < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != 0)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// nmemb => number of members
// size => size of each member
// LIMIT / lhs < rhs
