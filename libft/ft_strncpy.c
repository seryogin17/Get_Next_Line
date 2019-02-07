/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:10:06 by thansen           #+#    #+#             */
/*   Updated: 2019/01/13 19:02:20 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && len)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len--)
		dst[i++] = '\0';
	return (dst);
}
