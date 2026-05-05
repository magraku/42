/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariagraciaramirezku <mariagraciaramire    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:46:48 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/06 01:59:03 by mariagracia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_putstr(char str)
{
    int    i;

    i = 0;
    while (str[i])
        write(1, &str[i++], 1);
    return (i);
}

int    ft_putnbr(long n)
{
    int    res;
    int    count;

    res = 0;
    if (n < 0)
    {
        n = n -1;
        ft_putchar('-');
        count++;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        count++;
    }
    else if (n >= 0 && n <= 9)
        ft_putchar(n % 10 + 48);
    return (count);
}

int    ft_putnbr_hex(int n, char c)
{
    char            base;
    int                count;
    unsigned int    nb;

    if (c == 'x')
        base = "0123456789abcdef";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    count = 0;
    nb = (unsigned int)n;
    if (nb > 16)
        count += ft_putnbr_hex(base[nb / 16], c);
    count += ft_putchar(base[nb % 16]);
    return (count);
}

int    ft_putnbr_adress(voidp)
{
    int                count;
    unsigned long    nb;

    count = 0;
    if (!p)
        return (write(1, "(nil)", 5), 5);
    nb = (unsigned long)p;
    count = write(1, "0x", 2);
    count += ft_putnbr_hex(nb, 'x');
    return (count);
}

int    ft_putnbr_base_unsigned(unsigned int nb)
{
    long    i;
    char    *tab;
    int        count;

    count = 0;
    tab = "0123456789";
    if (nb >= 10)
        count += ft_putnbr_base_unsigned(nb / 10);
    count += write(1, &tab[nb % 10], 1);
    return (count);
}
