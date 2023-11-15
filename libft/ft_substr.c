/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:28:26 by macassag          #+#    #+#             */
/*   Updated: 2023/11/14 13:53:59 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	len_str;
	size_t	i;

	i = 0;
	if (start >= (unsigned int) ft_strlen((char *) s))
	{
		new_str = malloc(1 * sizeof(char));
		new_str[i] = '\0';
		return (new_str);
	}
	len_str = (size_t) ft_strlen((char *) s + start);
	if (len_str > len)
		len_str = len_str - (len_str - len);
	new_str = (char *) malloc((len_str + 1) * sizeof(char));
	if (!new_str)
		return ((void *) 0);
	while (i < len && s[i + start])
	{
		new_str[i] = s[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
