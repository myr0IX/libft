/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:52:05 by macassag          #+#    #+#             */
/*   Updated: 2023/11/30 15:59:59 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putbase_pointer(size_t nb, char *base, int *count)
{
	size_t		size;

	size = 0;
	while (base[size])
		size++;
	if (! (size <= 1))
	{
		if (nb >= size)
		{
			putbase_pointer(nb / size, base, count);
			if (int_putchar_fd(base[nb % size], 1, count) == (-1))
				return (-1);
		}
		else
			if (int_putchar_fd(base[nb % size], 1, count) == (-1))
				return (-1);
	}
	else
		return (*count);
	return (*count);
}

int	ft_putnbr_base(unsigned int nb, char *base, int *count)
{
	size_t		size;

	size = 0;
	while (base[size])
		size++;
	if (! (size <= 1))
	{
		if (nb >= size)
		{
			ft_putnbr_base(nb / size, base, count);
			if (int_putchar_fd(base[nb % size], 1, count) == (-1))
				return (-1);
		}
		else
			if (int_putchar_fd(base[nb % size], 1, count) == (-1))
				return (-1);
	}
	else
		return (*count);
	return (*count);
}

int	print_p(size_t s, int *count)
{
	if (!s)
		return (int_putstr_fd("(nil)", 1, count));
	int_putstr_fd("0x", 1, count);
	return (putbase_pointer(s, "0123456789abcdef", count));
}

int	print_u(unsigned int nbr, int *count)
{
	int	fd;

	fd = 1;
	if (nbr > 9)
	{
		print_u(nbr / 10, count);
		if (int_putchar_fd(nbr % 10 + '0', fd, count) == (-1))
			return (-1);
	}
	if (nbr < 10)
		if (int_putchar_fd(nbr + '0', fd, count) == (-1))
			return (-1);
	return (*count);
}
