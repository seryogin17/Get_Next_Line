/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 19:01:42 by thansen           #+#    #+#             */
/*   Updated: 2019/01/23 17:47:29 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = ft_strlen(s1);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i--)
		s[i] = s1[i];
	return (s);
}
