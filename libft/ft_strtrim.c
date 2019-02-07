/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:25:33 by thansen           #+#    #+#             */
/*   Updated: 2019/01/16 14:49:00 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*tail;

	if (!s)
		return (NULL);
	while (WHITESPACE(*s))
		s++;
	if (!s)
		return (NULL);
	tail = s + ft_strlen(s) - 1;
	while (WHITESPACE(*tail))
		tail--;
	return (ft_strsub(s, 0, ft_strlen(s) - ft_strlen(tail) + 1));
}
