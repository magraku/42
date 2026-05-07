/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:56:22 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/06 22:51:14 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	count = ft_parsing(format, ap);
	va_end(ap);
	return (count);
}

// #include <stdio.h>
// #include "ft_printf.h"

// int    main(void)
// {
//     int    len1;
//     int    len2;

//     /* STRING */
//     len1 = printf("p");
//     len2 = ft_printf("p");
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* CHAR */
//     len1 = printf("printf : %c\n", 'A');
//     len2 = ft_printf("ft     : %c\n", 'A');
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* INT */
//     len1 = printf("printf : %d\n", -42);
//     len2 = ft_printf("ft     : %d\n", -42);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* UNSIGNED */
//     len1 = printf("printf : %u\n", 4294967295U);
//     len2 = ft_printf("ft     : %u\n", 4294967295U);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* HEX MIN */
//     len1 = printf("printf : %x\n", 255);
//     len2 = ft_printf("ft     : %x\n", 255);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* HEX MAJ */
//     len1 = printf("printf : %X\n", 255);
//     len2 = ft_printf("ft     : %X\n", 255);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* POINTER */
//     len1 = printf("printf : %p\n", &len1);
//     len2 = ft_printf("ft     : %p\n", &len1);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* NULL STRING */
//     len1 = printf("printf : %s\n", NULL);
//     len2 = ft_printf("ft     : %s\n", NULL);
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     /* PERCENT */
//     len1 = printf("printf : %%\n");
//     len2 = ft_printf("ft     : %%\n");
//     printf("len printf = %d | len ft = %d\n\n", len1, len2);

//     return (0);
// }
