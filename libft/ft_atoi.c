/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:58:00 by macassag          #+#    #+#             */
/*   Updated: 2023/11/10 16:53:21 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				result;
	unsigned int	n;
	unsigned int	i;

	if (!nptr)
		return (0);
	i = 0;
	n = 0;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			n++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	if (n % 2 != 0)
		result *= -1;
	return (result);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int rft;
	int	mft;

	if (argc == 3)
	{
		rft = atoi(argv[1]);
		mft = ft_atoi(argv[2]);
		printf("rft : %d\n", rft); 
		printf("mft : %d", mft);
	}
	return (0);
}
*/