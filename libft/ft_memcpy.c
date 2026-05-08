/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:14:27 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/30 18:33:23 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	if (!d && !s)
		return (NULL);
	dest = (unsigned char *)d;
	src = (const unsigned char *)s;
	while (n--)
		*dest++ = *src++;
	return (d);
}

// int	main(void)
// {
// 	char	src[] = "ABCDEFGHIJK";

// 	printf("antes %s\n", src);
// 	ft_memcpy(src, src + 2, 5);
// 	printf("despues %s\n", src);
// 	return (0);
// }
