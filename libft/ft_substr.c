/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:26:31 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 17:30:56 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	slen;

	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		new = malloc(1);
		if (!new)
			return (NULL);
		return (new[0] = '\0', new);
	}
	if (len > slen - start)
		len = slen - start;
	new = malloc((sizeof(char)) * (len + 1));
	if (!new)
		return (NULL);
	i = start;
	while (j < len && s[i])
		new[j++] = s[i++];
	return (new[j] = '\0', new);
}

// int	main(void)
// {
// 	char const	str[] = "abuelita xeroca";
// 	char		*new;

// 	new = ft_substr(str, 5, 9);
// 	printf("%s", new);
// 	free(new);
// 	return (0);
// }if (start >= slen)