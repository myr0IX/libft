/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:05:01 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 14:13:31 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s[i])
		i++;
	i++;
	while (i-- > 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	return ((void *)0);
}
