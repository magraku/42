/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:13:57 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/24 17:48:34 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 'a' && c <= 'z')
			c = c - 32;
		return (c);
	}
	else
		return (c);
}
// int	main(void)
// {	
// 	printf("%c\n", ft_toupper('z'));
// }
