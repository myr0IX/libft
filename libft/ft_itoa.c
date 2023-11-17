/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:15:59 by macassag          #+#    #+#             */
/*   Updated: 2023/11/17 11:41:22 by macassag         ###   ########.fr       */
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

static int	count_len(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	count;
	int		neg;
	char	*result;

	neg = 0;
	count = count_len(n);
	if (n < 0)
	{
		neg = -1;
		n *= -1;
	}
	result = (char *) ft_calloc(count + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (count > 0)
	{
		result[--count] = n % 10 + '0';
		n = n / 10;
	}
	if (neg == -1)
		result[0] = '-';
	return (result);
}
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	if (argc != 2)
// 		return (0);
// 	str = ft_itoa(ft_atoi((const char *)argv[1]));
// 	printf("%s", str);
// }
