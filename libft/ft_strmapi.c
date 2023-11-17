/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:35 by macassag          #+#    #+#             */
/*   Updated: 2023/11/17 15:57:09 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_test(unsigned int i, char c)
{
	if (i == 0)
		return (0);
	
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
}

int	main(void)
{
	char	*test;

	test = ft_strmapi(test, ft_atoi);
}