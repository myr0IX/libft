/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:59:44 by macassag          #+#    #+#             */
/*   Updated: 2023/11/13 13:23:35 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *) s;
	i = 0;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return ((void *) d);
}
/*
int	main(int argc, char **argv)
{
	int	*t;
	size_t n;

	if (argc == 2)
	{
		n = argv[1];
		t = (int *) malloc(10 * sizeof(int));
		t = (int *)ft_memset (t, 'd', n);
	}
	return (0);
}
*/