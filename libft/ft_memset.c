/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:59:44 by macassag          #+#    #+#             */
/*   Updated: 2023/11/11 13:23:49 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	int	nbr;
	int	*d;

	nbr = n / 4;
	if (n % 4 != 0)
		nbr++;
	d = (int *) s;
	i = 0;
	while (i <= nbr)
	{
		d[i] = c;
		i++;
	}
	return ((void *) d);
}
