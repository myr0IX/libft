/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:27:16 by macassag          #+#    #+#             */
/*   Updated: 2023/11/09 14:35:45 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	*d;
	int	*s;
	int	nbr;

	nbr = n / 4;
	if (n % 4 != 0)
		nbr++;
	i = 0;
	d = (int *)dest;
	s = (int *)src;
	if (d < s)
	{
		i = n - 1;
		while (i-- == 0)
			d[i] = s[i];
	}
	else
	{
		while (i++ < nbr)
			d[i] = s[i];
	}
	return ((void *) d);
}
