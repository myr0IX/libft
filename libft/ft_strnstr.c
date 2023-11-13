/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:53:04 by macassag          #+#    #+#             */
/*   Updated: 2023/11/13 18:11:17 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	start_find;
	char			*find;

	i = 0;
	if (little[i] == '\0' || big[i] == '\0')
		return ((void *) 0);
	start_find = 0;
	find = (char *) big;
	while (i < len && find[i])
	{
		if (find[i + start_find] == little[start_find])
		{
			if (find[start_find] == '\0')
				return (find + i);
			start_find++;
			i++;
		}
		else
		{
			start_find = 0;
			i++;
		}
	}
	return ((void *) 0);
}
