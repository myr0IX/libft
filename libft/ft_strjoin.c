/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:19:57 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 10:55:34 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*nstr;
	unsigned int	i;
	unsigned int	j;
	int				len;

	i = 0;
	len = ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1;
	nstr = (char *) ft_calloc(len, sizeof(char));
	if (!nstr)
		return ((void *) 0);
	j = 0;
	while (s1[j])
	{
		nstr[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
