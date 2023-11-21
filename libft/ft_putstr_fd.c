/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:17:39 by macassag          #+#    #+#             */
/*   Updated: 2023/11/20 10:56:27 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (0);
// 	ft_putstr_fd(argv[1], atoi(argv[2]));
// 	return (0);
// }
