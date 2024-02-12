/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wwrite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:11:08 by macassag          #+#    #+#             */
/*   Updated: 2023/12/18 14:35:50 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_putchar_fd(char c, int fd, int *count)
{
	(*count)++;
	return (write(fd, &c, 1));
}

int	int_putstr_fd(char *s, int fd, int *count)
{
	if (!s)
	{
		*count += 6;
		return (write(fd, "(null)", 6));
	}
	else
	{
		*count += (int)ft_strlen(s);
		return (write(fd, s, ft_strlen(s)));
	}
}

int	int_putnbr_fd(int n, int fd, int *count)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = -n;
		if (int_putchar_fd('-', fd, count) == (-1))
			return (-1);
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		int_putnbr_fd(nbr / 10, fd, count);
		if (int_putchar_fd(nbr % 10 + '0', fd, count) == (-1))
			return (-1);
	}
	if (nbr < 10)
		if (int_putchar_fd(nbr % 10 + '0', fd, count) == (-1))
			return (-1);
	return (*count);
}
