/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:53:04 by macassag          #+#    #+#             */
/*   Updated: 2023/11/14 11:55:33 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strlen(char *str);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	i = 0;
	if (big[i] == '\0')
		return ((void *) 0);
	if (len == 0 || little[i] == '\0')
		return ((char *) big);
	while (i < len && big[i])
	{
		if (ft_strncmp(big + i, little, ft_strlen((char *)little)) == 0
			&& (i + (ft_strlen((char *)little)) <= len))
			return ((char *)(big + i));
		i++;
	}
	return ((void *) 0);
}
