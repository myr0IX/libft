/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:28:26 by macassag          #+#    #+#             */
/*   Updated: 2023/11/28 09:20:13 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	len_str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int) ft_strlen(s))
		return (ft_calloc(1, 1));
	len_str = (size_t) ft_strlen(s + start);
	if (len_str > len)
		len_str = len_str - (len_str - len);
	new_str = (char *) ft_calloc((len_str + 1), sizeof(char));
	if (!new_str)
		return ((void *) 0);
	while (i < len && s[i + start])
	{
		new_str[i] = s[i + start];
		i++;
	}
	return (new_str);
}
