/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:20:51 by macassag          #+#    #+#             */
/*   Updated: 2023/11/24 16:51:52 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dest)
		return ((void *) 0);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *) d);
}

/*
int	main(void)
{
	char src[] = "test basic du memcpy !";
    char buff1[22];
    char buff2[22];
 
    memcpy(buff1, src, 22);
    ft_memcpy(buff2, src, 22);
	return (0);
}
*/