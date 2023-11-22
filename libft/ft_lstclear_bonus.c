/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:42:19 by macassag          #+#    #+#             */
/*   Updated: 2023/11/22 14:39:57 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	*lst = NULL;
}
