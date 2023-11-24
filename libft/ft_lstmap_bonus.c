/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:40:42 by macassag          #+#    #+#             */
/*   Updated: 2023/11/24 17:42:11 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		if (!lst)
			ft_lstdelone(lst, del);
		lst = lst->next;
	}
}
