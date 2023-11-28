/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:40:42 by macassag          #+#    #+#             */
/*   Updated: 2023/11/24 21:25:01 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*ncontent;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		ncontent = ft_lstnew(tmp);
		if (!ncontent)
		{
			del(tmp);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, ncontent);
		lst = lst->next;
	}
	return (nlst);
}
