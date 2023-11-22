/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:42:40 by macassag          #+#    #+#             */
/*   Updated: 2023/11/22 14:57:46 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	tmp = *lst;
	if()
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->next = NULL;
}
