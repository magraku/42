/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:23:48 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/22 19:53:51 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest || !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

//#include <string.h>
// int	main(void)
// {
// 	char str[] = "ABCDEFGHIJKLMNOPQRSTUV";
// 	char str2[20];

// 	int	i = 0;
// 	while (str[i])
// 	{
// 		str2[i++] = str[i++];
// 	}
// 	memmove(str + 3, str, 4);
// 	printf("antes: %s\n", str);
// 	ft_memmove(str2 + 3, str2, 4);
// 	printf("antes: %s\n", str);
// }