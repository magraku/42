/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:57:44 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 19:07:51 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;

	if (n != 0 && size > ((size_t) - 1) / n)
		return (NULL);
	array = malloc(n * size);
	if (!array)
		return (NULL);
	ft_bzero(array, n * size);
	return (array);
}

// int	main(void)
// {
// 	int	*array;
// 	int		i;

// 	array = ft_calloc(5, 4);
// 	if (!array)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	return (0);
// }