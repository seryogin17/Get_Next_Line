/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:25:10 by thansen           #+#    #+#             */
/*   Updated: 2019/02/07 18:34:38 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 10

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

int get_next_line(const int fd, char **line);

#endif
