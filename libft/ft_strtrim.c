/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:57:41 by macassag          #+#    #+#             */
/*   Updated: 2023/11/15 13:42:02 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);
int		ft_strlen(char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
}

/*
int	main(void)
{
	int		i = 0;
	char	*s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char	*s2 = "Hello \t  Please\n Trim me !";
	char 	*ret = ft_strtrim(s1, " \n\t");
	while  (ret[i])
	{
		printf("%d", ret[i]);
		i++;
	}
	return (0);
}
*/