/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:24:22 by macassag          #+#    #+#             */
/*   Updated: 2023/11/15 09:23:17 by macassag         ###   ########.fr       */
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
	while (i < (nmemb * size))
		array[i++] = '\0';
	return ((void *) array);
}

/*
#include "ft_memset.c"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*str1;
	char	*str2;
	int	i;

	i = 0;
	nmemb = 5;
	size = sizeof(int);
	str1 = (char *) calloc(nmemb, size);
	str1 = ft_memset(str1, 'd', nmemb);
	printf("real ft :\t");
	while (str1[i])
	{
		printf("%d\t", str1[i]);
		i++;
	}
	printf("len : %d\n", i);
	str2 = (char *) ft_calloc(nmemb, size);
	str2 = ft_memset(str2, 'd', nmemb);
	i = 0;
	while (str2[i])
		printf("my ft : %d", str2[i++]);
	return (0);
}
*/
