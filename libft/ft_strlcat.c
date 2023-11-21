/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:23:41 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 14:36:31 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	len;

	j = 0;
	i = 0;
	len = 0;
	while (dest[i] && i < size)
		i++;
	len = ft_strlen(src);
	if (size == 0 || i == size)
		return (i + len);
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j < len)
		i += len - j;
	dest[i] = '\0';
	return (i);
}
