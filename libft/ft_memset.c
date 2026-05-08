/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:48:36 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/27 15:37:01 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
		dest[i++] = (unsigned char)c;
	return (dest);
}

/*
int	main(void)
{
	char	dest[] = "hhhhhhhhhhhhhhhhhhhhhh";
	ft_memset(dest, 'j', 7);
	printf("%s", dest); 
	return (0);
}*/