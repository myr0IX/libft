/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:27:16 by macassag          #+#    #+#             */
/*   Updated: 2023/11/13 13:57:45 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (s < d)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return ((void *) d);
}

/*
int	main(void)
{
	char *src = "this is a good nyancat !\r\n";
	char dst1[20];
    char dst2[20];
	int size = strlen(src);

    memmove(dst1, src, size);
    ft_memmove(dst2, src, size);
	return (0);
}
*/