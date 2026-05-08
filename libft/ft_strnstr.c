/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:17:50 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 14:45:57 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && big[i + j]
			&& little[j]
			&& big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	grande[] = "Vil i i a l a rlaevolucion";
// 	const char	chiki[] = "la";

// 	printf("%s\n", ft_strnstr(grande, chiki, 25));
// 	return (0);
// }
