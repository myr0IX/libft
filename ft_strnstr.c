/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:53:04 by macassag          #+#    #+#             */
/*   Updated: 2023/11/25 14:18:53 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	if (big[i] == '\0')
		return ((void *) 0);
	while (i < len && big[i])
	{
		if (ft_strncmp(big + i, little, ft_strlen((char *)little)) == 0
			&& (i + (ft_strlen((char *)little)) <= len))
			return ((char *)(big + i));
		i++;
	}
	return ((void *) 0);
}
