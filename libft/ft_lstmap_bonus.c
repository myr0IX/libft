/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:40:42 by macassag          #+#    #+#             */
/*   Updated: 2023/11/22 14:04:26 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*nlst;

// 	nlst = (t_list *) malloc(sizeof(t_list));
// 	if (!nlst)
// 		return (NULL);
// 	while (lst != NULL)
// 	{
// 		if (!ft_lstiter(lst, (*f)))
// 		{
// 			del(lst);
// 			free(lst);
// 			return (NULL);
// 		}
// 		else
// 			lst = lst->next;
// 	}
// }
