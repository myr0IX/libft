/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:48:09 by macassag          #+#    #+#             */
/*   Updated: 2023/11/13 14:52:16 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[30];
	char buff2[30];

	memset(buff2, 'A', sizeof(buff2) - 1);	
	buff2[sizeof(buff1) - 1] = 0;
	ft_strlcpy(buff2, str, sizeof(buff2));
	i = 0;
	while(buff2[i])
		printf("%c", buff2[i++]);
	return (0);
}
*/