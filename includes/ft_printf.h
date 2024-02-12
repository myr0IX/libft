/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:05:36 by macassag          #+#    #+#             */
/*   Updated: 2023/12/18 14:35:18 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_printf(const char *arg0, ...);
int		print_p(size_t s, int *count);
int		print_u(unsigned int nbr, int *count);
int		int_putchar_fd(char c, int fd, int *count);
int		int_putstr_fd(char *s, int fd, int *count);
int		int_putnbr_fd(int n, int fd, int *count);
int		ft_putnbr_base(unsigned int nb, char *base, int *count);

#endif
