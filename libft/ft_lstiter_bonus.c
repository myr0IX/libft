/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:42:01 by macassag          #+#    #+#             */
/*   Updated: 2023/11/22 14:07:20 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	l->next = lstnew(strdup("KO !"));
// 	l->next->next = lstnew(strdup("KO !"));
// 	ft_lstiter(l, lstiter_f);
// 	return (0);
// }