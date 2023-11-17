/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:57:41 by macassag          #+#    #+#             */
/*   Updated: 2023/11/16 10:46:19 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_strlen(char *str);

static int	skip(const char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	size_t	i;

	i = 0;
	while (s1[i] && skip(s1[i], set) == 1)
		s1++;
	if (s1[i] == '\0')
	{
		nstr = (char *) ft_calloc(1, sizeof(char));
		if (!nstr)
			return ((void *) 0);
		return (nstr);
	}
	i += ft_strlen((char *)s1) - 1;
	while (skip(s1[i], set) == 1)
		i--;
	nstr = (char *) ft_calloc(i + 2, sizeof(char));
	if (!nstr)
		return ((void *) 0);
	ft_strlcpy(nstr, s1, i + 2);
	return (nstr);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = " \t  \n\n\nHello \t  Please\n Trim me !\n \t\n  ";
// 	char	*s2 = "Hello \t  Please\n Trim me !";
// 	char 	*ret = ft_strtrim(s1, " \n\t");
// 	printf("%s", ret);
// 	return (0);
// }