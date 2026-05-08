/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:13:02 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 19:18:58 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_alpha(unsigned int i, char c)
// {
// 	if (ft_isalpha(c))
// 	{
// 		if (i % 3 == 0)
// 			return (ft_toupper(c));
// 	}
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (char)f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char const	str[] = "hola ami8g7777777777u9e";
// 	char		*new;

// 	new = ft_strmapi(str, &ft_alpha);
// 	printf("%s\n", new);
// 	return (0);
// }
