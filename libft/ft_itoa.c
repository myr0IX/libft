/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:15:59 by macassag          #+#    #+#             */
/*   Updated: 2023/11/18 11:10:28 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	unsigned int	i;
// 	char			*array;

// 	array = (char *) malloc(nmemb * size);
// 	if (!array)
// 		return ((void *) 0);
// 	i = 0;
// 	while (i < (nmemb * size))
// 		array[i++] = '\0';
// 	return ((void *) array);
// }

// int	ft_atoi(const char *nptr)
// {
// 	int				result;
// 	unsigned int	n;
// 	unsigned int	i;

// 	i = 0;
// 	n = 0;
// 	result = 0;
// 	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
// 		i++;
// 	if (nptr[i] == '+' || nptr[i] == '-')
// 	{
// 		if (nptr[i] == '-')
// 			n++;
// 		i++;
// 	}
// 	while (nptr[i] >= '0' && nptr[i] <= '9')
// 	{
// 		result = (result * 10) + (nptr[i] - '0');
// 		i++;
// 	}
// 	if (n % 2 != 0)
// 		result *= -1;
// 	return (result);
// }

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
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	*str;
// 	char	*t;

// 	if (argc != 2)
// 		return (0);
// 	str = ft_itoa(ft_atoi((const char *)argv[1]));
// 	printf("%s", str);
// }
