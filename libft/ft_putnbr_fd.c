/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznty <hznty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:37:45 by macassag          #+#    #+#             */
/*   Updated: 2023/11/24 22:34:25 by hznty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = -n;
		ft_putchar_fd('-', fd);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', fd);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
// 	return (0);
// }
