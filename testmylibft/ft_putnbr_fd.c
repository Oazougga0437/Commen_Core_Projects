/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazougga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:30:54 by oazougga          #+#    #+#             */
/*   Updated: 2026/11/05 12:32:24 by oazougga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nt;
	char	c;

	nt = n;
	if (nt < 0)
	{
		nt = -nt;
	}
	if (nt >= 0 && nt <= 9)
	{
		c = nt + '0';
		write(fd, &c, 1);
	}
	if (nt > 9)
	{
		ft_putnbr_fd(nt / 10, fd);
		ft_putnbr_fd(nt % 10, fd);
	}
}
