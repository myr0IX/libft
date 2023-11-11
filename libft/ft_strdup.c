/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:08:43 by macassag          #+#    #+#             */
/*   Updated: 2023/11/09 15:49:43 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	cpy = (void *) malloc(++i * (sizeof(char)));
	if (!cpy)
		return ((void *) 0);
	i = 0;
	while (s[i++])
		cpy[i] = s[i];
	cpy[++i] = '\0';
	return (cpy);
}
