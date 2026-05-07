/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:54:26 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/06 22:30:21 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_unsigned(unsigned int nb)
{
	char	*tab;
	int		count;

	count = 0;
	tab = "0123456789";
	if (nb >= 10)
		count += ft_putnbr_base_unsigned(nb / 10);
	count += write(1, &tab[nb % 10], 1);
	return (count);
}

static int	ft_putnbr_hex_a(unsigned long long nb, char c)
{
	char	*base;
	int		count;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_putnbr_hex_a(nb / 16, c);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_putnbr_adress(void *p)
{
	int					count;
	unsigned long long	nb;

	count = 0;
	if (!p)
		return (write(1, "(nil)", 5), 5);
	nb = (unsigned long long)p;
	count = write(1, "0x", 2);
	count += ft_putnbr_hex_a(nb, 'x');
	return (count);
}
