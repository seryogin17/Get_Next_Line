/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 15:40:29 by thansen           #+#    #+#             */
/*   Updated: 2019/02/07 17:56:27 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	int		fdd;
	char	*line;
	char	*nline;
	int		n;

	n = 1;
	fd = open("shake", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%d. %s\n", n, line);
		n++;
		ft_strdel(&line);
	}
	fd = open("lower", O_RDONLY);
	fdd = open("upper", O_RDONLY);
	while (get_next_line(fd, &line) && get_next_line(fdd, &nline))
	{
		printf("%d. %s\n", n, line);
		n++;
		printf("%d. %s\n", n, nline);
		n++;
	}
	return (0);
}
