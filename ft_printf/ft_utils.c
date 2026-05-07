/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:46:48 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/06 22:12:08 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6), 6);
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
		count++;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + 48);
	return (count);
}

int	ft_putnbr_hex(unsigned int nb, char c)
{
	char	*base;
	int		count;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_putnbr_hex(nb / 16, c);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
