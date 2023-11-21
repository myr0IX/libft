/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:22:14 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 11:40:33 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)((unsigned int)i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char b[] = "override this !";
//  	char b2[0xF0];
//  	size_t size = strlen(b);

//  	for (size_t i = 0; i < size; i++)
// 		ft_striteri(i, b2 + i);
//  	b2[size] = 0;
//  	ft_striteri(b, ft_striteri);
// 	return (0);
// }