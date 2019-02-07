/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 13:59:53 by thansen           #+#    #+#             */
/*   Updated: 2018/12/24 17:27:48 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;

	d = (char *)dst;
	s = (const char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	if (dst > src)
		while (len--)
			d[len] = s[len];
	return (dst);
}
