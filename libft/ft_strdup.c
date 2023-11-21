/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:08:43 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 10:56:34 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	cpy = (char *) malloc((ft_strlen((char *) s) + 1) * (sizeof(char)));
	if (!cpy)
		return ((void *) 0);
	while (s[i] && i < (unsigned int) ft_strlen((char *) s) + 1)
	{
		cpy[i] = s[i];
		i++;
	}
	if (s[i] == '\0')
		cpy[i] = '\0';
	return (cpy);
}
