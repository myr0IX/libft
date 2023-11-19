/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:35 by macassag          #+#    #+#             */
/*   Updated: 2023/11/18 08:38:26 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_test(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c + 1);
// 	else
// 		return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	i = 0;
	nstr = (char *) ft_calloc(ft_strlen((char *) s) + 1, sizeof(char));
	if (!nstr)
		return (NULL);
	while (s[i])
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (nstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test;

// 	test = "ab0cd";
// 	test = ft_strmapi(test, &ft_test);
// 	printf("%s", test);
// 	return (0);
// }
