/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:58:54 by thansen           #+#    #+#             */
/*   Updated: 2019/01/16 18:13:50 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_cnt_w(char const *s, char c)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			result++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (result);
}

static	void	ft_clear(char **arr, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(arr[i++]);
	free(arr);
}

static	char	*ft_strndup(const char *s1, int n)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	s[n] = '\0';
	while (n--)
		s[n] = s1[n];
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		start;
	int		z;

	start = 0;
	i = 0;
	z = 0;
	if (!s || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (ft_cnt_w(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			if (!(arr[z++] = ft_strndup(s + start, i - start)))
				ft_clear(arr, z);
	}
	arr[z] = 0;
	return (arr);
}
