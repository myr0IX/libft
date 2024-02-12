/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:56:35 by macassag          #+#    #+#             */
/*   Updated: 2023/11/27 15:16:14 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	nstr = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!nstr)
		return (NULL);
	while (s[i])
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (nstr);
}
