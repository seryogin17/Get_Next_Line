/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:56:46 by thansen           #+#    #+#             */
/*   Updated: 2019/01/14 15:30:07 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	if (!haystack[0] && !needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			else
				break ;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		else
			i = i - j + 1;
	}
	return (NULL);
}
