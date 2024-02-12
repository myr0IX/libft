/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:15:59 by macassag          #+#    #+#             */
/*   Updated: 2023/11/27 16:05:47 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(unsigned int nbr, size_t count)
{
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

static char	*size_char(int n, unsigned int nbr, size_t count)
{
	char			*result;

	count = count_len(nbr, count);
	result = (char *) ft_calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (count > 0)
	{
		result[--count] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	size_t			count;
	unsigned int	nbr;
	char			*result;

	count = 0;
	if (n == 0)
	{
		count++;
		nbr = n;
	}
	else if (n < 0)
	{
		nbr = -n;
		count++;
	}
	else
		nbr = n;
	result = size_char(n, nbr, count);
	return (result);
}
