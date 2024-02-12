/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:58:10 by macassag          #+#    #+#             */
/*   Updated: 2023/11/25 14:17:48 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *) s;
	while (i < n)
	{
		if ((unsigned char)d[i] == (unsigned char)c)
			return ((void *)(d + i));
		i++;
	}
	return ((void *) 0);
}
