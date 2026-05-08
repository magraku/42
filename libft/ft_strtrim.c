/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:18:57 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 19:26:33 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_tab(char const *set, int tab[256])
{
	size_t	i;

	i = 0;
	while (i < 256)
		tab[i++] = 0;
	i = 0;
	while (set[i])
		tab[(unsigned char)set[i++]] = 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;
	int		tab[256];

	if (!s1 || !set)
		return (NULL);
	set_tab(set, tab);
	start = 0;
	while (s1[start] && tab[(unsigned char)s1[start]])
		start++;
	end = ft_strlen(s1);
	while (end > start && tab[(unsigned char)s1[end - 1]])
		end--;
	new = malloc(end - start + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char const	s1[] = "  hola  \t como estan ";
// 	char const	set[] = " ";
// 	char		*new;

// 	new = ft_strtrim(s1, set);
// 	printf("%s\n", new);
// }