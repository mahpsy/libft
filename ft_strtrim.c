/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:11:17 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/27 19:41:39 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	l = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (l > i && ft_strchr(set, s1[l - 1]))
		l--;
	l = l - i + 1;
	str = malloc(l * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, l);
	return (str);
}
