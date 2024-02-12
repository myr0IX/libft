/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:40:52 by macassag          #+#    #+#             */
/*   Updated: 2024/01/03 13:00:03 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	percent_conv(const char *arg0, va_list ap, int *count)
{
	if (*arg0 == 'c')
		return (int_putchar_fd(va_arg(ap, int), 1, count));
	else if (*arg0 == 's')
		return (int_putstr_fd(va_arg(ap, char *), 1, count));
	else if (*arg0 == 'p')
		return (print_p(va_arg(ap, unsigned long), count));
	else if (*arg0 == 'd')
		return (int_putnbr_fd(va_arg(ap, int), 1, count));
	else if (*arg0 == 'i')
		return (int_putnbr_fd(va_arg(ap, int), 1, count));
	else if (*arg0 == 'u')
		return (print_u(va_arg(ap, unsigned int), count));
	else if (*arg0 == 'x')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789abcdef", count));
	else if (*arg0 == 'X')
		return (ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF", count));
	else if (*arg0 == '%')
		return (int_putchar_fd('%', 1, count));
	else if (*arg0 == '\0')
		return (-1);
	else
		return (int_putchar_fd('%', 1, count));
	return (*count);
}

int	ft_printf(const char *arg0, ...)
{
	va_list	ap;
	int		count;

	if (!arg0)
		return (-1);
	count = 0;
	va_start(ap, arg0);
	while (*arg0)
	{
		if (*arg0 != '%')
		{
			if (int_putchar_fd(*arg0, 1, &count) == (-1))
				return (-1);
			arg0++;
		}
		else if (*arg0 == '%')
		{
			arg0++;
			if (percent_conv(arg0, ap, &count) == (-1))
				return (-1);
			arg0++;
		}
	}
	va_end(ap);
	return (count);
}
