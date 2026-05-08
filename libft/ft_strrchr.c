/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:00:16 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 15:33:20 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_repetitions(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			j++;
		i++;
	}
	if (c == '\0')
		j++;
	return (j);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	rep;

	i = 0;
	j = 0;
	rep = ft_repetitions(s, (char)c);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			j++;
			if (j == rep)
				return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// this function returns a pointer to the last occurence of 
// the char 'c' in the string s
// int	main(void)
// {
// 	const char str[] = "aqui te vasadejarde wbdas";

// 	printf("%s\n", strrchr(str, 'e'));
// }