/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:14:40 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/23 21:38:06 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char	c = 'i';
// 	printf("%c\n", ft_tolower(c));
// }