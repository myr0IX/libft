/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:24:22 by macassag          #+#    #+#             */
/*   Updated: 2023/11/09 14:40:13 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	i;
	char			*array;

	array = (char *) malloc(nmemb * size);
	if (!array)
		return ((void *) 0);
	i = 0;
	while (i++ < (nmemb * size))
		array[i] = 0;
	return ((void *) array);
}
