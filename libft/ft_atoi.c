/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:58:00 by macassag          #+#    #+#             */
/*   Updated: 2023/11/23 21:34:06 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_white_space(const char *nptr)
{
	size_t	i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	size_t	result;
	size_t	i;
	size_t	overflow;
	int		neg;

	result = 0;
	neg = 1;
	overflow = 9223372036854775807;
	i = skip_white_space(nptr);
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	if (result > 9223372036854775807)
		return (-1);
	if (result < 9223372036854775808 && neg == -1)
		return (0);
	return ((int)result * neg);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int rft;
// 	int	mft;

// 	if (argc == 2)
// 	{
// 		rft = atoi(argv[1]);
// 		mft = ft_atoi(argv[1]);
// 		printf("rft : %d\n", rft); 
// 		printf("mft : %d\n", mft);
// 	}
// 	return (0);
// }