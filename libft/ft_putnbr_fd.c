/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:11:17 by thansen           #+#    #+#             */
/*   Updated: 2019/01/17 16:41:46 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	if (fd <= 0)
		return ;
	num = (long)n;
	if (num < 0)
	{
		num = -num;
		ft_putchar_fd('-', fd);
	}
	if (num / 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + num % 10, fd);
}
