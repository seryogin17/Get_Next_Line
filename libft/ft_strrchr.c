/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:11:51 by thansen           #+#    #+#             */
/*   Updated: 2019/01/14 13:53:02 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + l);
	l--;
	while ((l >= 0) && s[l] != c)
		l--;
	if (s[l] == c)
		return ((char *)s + l);
	return (NULL);
}
