/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:12:55 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/25 22:43:16 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		str = ft_calloc(1, 1);
		if (!str)
			return (0);
		return (str);
	}
	if (len > ft_strlen(s + start))
	{
		len = (ft_strlen(s + start));
		str = ft_calloc(len + 1, 1);
		if (!str)
			return (0);
	}
	return ((char *)ft_strlcpy(str, s, len));
}
