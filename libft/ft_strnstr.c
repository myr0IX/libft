/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:53:04 by macassag          #+#    #+#             */
/*   Updated: 2023/11/09 14:40:05 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	start_find;
	char			*src;

	i = 0;
	start_find = 0;
	if (little[i] == '\0' || big[i] == '\0')
		return ((void *) 0);
	src = (char *) big;
	while (i < len || src[i])
	{
		if (src[i + start_find] == little[start_find])
		{
			start_find++;
			if (start_find == '\0')
				return (src + i);
		}
		else
		{
			start_find = 0;
			i++;
		}
	}
	return ((void *) 0);
}
