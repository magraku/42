/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:16:59 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/24 17:47:53 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// this funtion scans the initial n bytes of the memory area pointed to by s
// looking for the first appeareance of c. It returns a pointer to the matching
// byte or NULL if the character doesnt appear in the given memory area.

// int	main(void)
// {
// 	const char	str[] = "hola kcomo estan";
// 	char		c;

// 	c = 'k';
// 	printf("%s\n", (char*)memchr(str, (int)c, 8));
// 	return (0);
// }
