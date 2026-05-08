/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:16:27 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/23 21:37:43 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// This funtion compares  2 strings until the first 
// (at most) n bytes of s1 and s2
// int	main(void)
// {
// 	const char	s1[] = "hola jonete";
// 	const char	s2[] = "hola jojinete";

// 	printf("%d", ft_strncmp(s1, s2, 99));
// 	return (0);
// }