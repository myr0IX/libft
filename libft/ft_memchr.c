/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:58:10 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 14:21:28 by macassag         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	char	*ft = argv[1];
// 	char	*t = argv[1];
// 	ft_memchr((const void *)ft, '\305', 35);
// 	memchr((const void *)t, '\305', 35);
// 	printf("ft : %s\n", ft);
// 	printf("t  : %s", t);
// 	return (0);
// }