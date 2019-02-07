/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 19:32:17 by thansen           #+#    #+#             */
/*   Updated: 2019/01/13 20:27:25 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	dst += d;
	if (size < d + 1)
		return (size + s);
	size -= d;
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (d + s);
}
