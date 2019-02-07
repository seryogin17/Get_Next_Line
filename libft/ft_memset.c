/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:39:02 by thansen           #+#    #+#             */
/*   Updated: 2019/01/23 18:59:51 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	if (!b)
		return (NULL);
	ptr = (unsigned char*)b;
	while (len-- > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}
