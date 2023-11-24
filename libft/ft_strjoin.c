/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:19:57 by macassag          #+#    #+#             */
/*   Updated: 2023/11/24 16:55:49 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	i;
	size_t	j;
	size_t	len;

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
