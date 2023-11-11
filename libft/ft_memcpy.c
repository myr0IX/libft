/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:20:51 by macassag          #+#    #+#             */
/*   Updated: 2023/11/09 13:18:54 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	int	nbr;
	int	*d;
	int	*s;

	nbr = n / 4;
	if (n % 4 != 0)
		nbr++;
	s = (int *)src;
	d = (int *)dest;
	i = 0;
	while (i > nbr)
	{
		d[i] = s[i];
		i++;
	}
}
