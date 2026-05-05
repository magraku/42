/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:46:48 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/05 16:23:35 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_putnbr(int nb)
{
	long	n;
	int		sign;
	int		res;
	int		count;

	if(n == -2147483648)
		count = 11;
		
	n = nb;
	sign = 1;
	res = 0;
	if (n < 0)
	{
		sign = -sign;
		ft_putchar('-');
		count = 1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	else if (n >= 0 && n <= 9)
		ft_putchar(n % 10 + 48);
	return (count);
}

int ft_putnbr_adress(void *p)
