/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:12:39 by macassag          #+#    #+#             */
/*   Updated: 2023/11/10 17:18:43 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	int	*d;

	d = (int *) s;
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
	void	*str1;
	void	*str2;
	size_t	n;

	n = 5;
	str1 = "qwertyuii";
	str2 = str1;
	bzero(str1, n);
	ft_bzero(str2, n);
	return (0);
}
*/