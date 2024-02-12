/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:24:22 by macassag          #+#    #+#             */
/*   Updated: 2023/11/28 15:23:13 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	result;
	char	*array;

	if (!size)
	{
		array = (char *) malloc(0);
		if (!array)
			return (NULL);
		return (array);
	}
	result = nmemb * size;
	if (result / size != nmemb)
		return (NULL);
	array = (char *) malloc(nmemb * size);
	if (!array)
		return ((void *) 0);
	ft_bzero(array, nmemb * size);
	return ((void *) array);
}
