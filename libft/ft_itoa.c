/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:15:29 by thansen           #+#    #+#             */
/*   Updated: 2019/01/16 19:48:38 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*a;
	long	num;
	int		i;
	int		sign;

	sign = 0;
	i = 1;
	num = (long)n;
	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	while (n /= 10)
		i++;
	if (!(a = (char *)malloc(sizeof(char) * (i + sign + 1))))
		return (NULL);
	a[sign + i] = '\0';
	a[0] = '-';
	while (i--)
	{
		a[sign + i] = '0' + num % 10;
		num = num / 10;
	}
	return (a);
}
