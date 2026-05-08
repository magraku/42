/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:23:09 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 19:55:59 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
		dest[i++] = 0;
}

// int	main(void)
// {
// 	char dest[] = "hooooooooooooooo";
// 	printf("before bzero:%s\n", dest);
// 	ft_bzero(dest, 5);
// 	printf("after bzero:%s\n", dest);
// }