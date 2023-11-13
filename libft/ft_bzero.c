/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:12:39 by macassag          #+#    #+#             */
/*   Updated: 2023/11/13 12:09:47 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *) s;
	i = 0;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
int	main (void)
{
	int	*rft;
	int	*str2;
	size_t	n;

	n = 5;
	rft = malloc(10 * sizeof(int));
	str2 = malloc(10 * sizeof(int));
	bzero(rft, n);
	ft_bzero(str2, n);
	return (0);
}
*/