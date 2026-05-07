/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:44:16 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/06 22:29:01 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);
int	find_arg(char c, va_list ap);
int	ft_putnbr_hex(unsigned int n, char c);
int	ft_putnbr_adress(void *p);
int	ft_putnbr_base_unsigned(unsigned int nb);
int	ft_parsing(const char *format, va_list ap);

#endif