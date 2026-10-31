/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahebrah <mahebrah@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 16:44:19 by mahebrah          #+#    #+#             */
/*   Updated: 2026/10/31 17:53:48 by mahebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	t;

	t = n;
	if (t < 0)
	{
		write(fd, "-", 1);
		t = t * -1;
	}
	if (t >= 10)
	{
		ft_putnbr_fd(t / 10, fd);
	}
	c = t % 10 + '0';
	write(fd, &c, 1);
}
