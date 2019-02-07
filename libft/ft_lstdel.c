/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:09:30 by thansen           #+#    #+#             */
/*   Updated: 2019/01/23 17:42:20 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*cpnext;

	if (!alst || !*alst)
		return ;
	while ((*alst)->next)
	{
		cpnext = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = cpnext;
	}
	ft_lstdelone(alst, del);
}
