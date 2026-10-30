/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:46:05 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/29 23:55:41 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

static size_t	digits(int n);
static char		*prepare(int *n, int *i, int *n_or_p);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		n_or_p;

	str = prepare(&n, &i, &n_or_p);
	if (!str)
		return (NULL);
	if (n == INT_MIN)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	while (i >= n_or_p)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

static char	*prepare(int *n, int *i, int *n_or_p)
{
	char	*str;

	*i = digits(*n);
	str = malloc((*i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[*i] = '\0';
	*i = *i - 1;
	*n_or_p = 0;
	if (*n < 0)
	{
		*n_or_p = 1;
		*n = *n * -1;
		str[0] = '-';
	}
	return (str);
}

static size_t	digits(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

// int main(void)
// {
// 	printf("%s", ft_itoa(12));
// 	printf("%lu", digits(-12831825));
// 	printf("%lu", digits(282422));
// 	printf("%lu", digits(0));
// } 
