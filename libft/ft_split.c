/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:27:49 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 20:15:09 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_word(const char *s, int start, int end)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(end - start + 1);
	if (!new)
		return (NULL);
	while (start < end)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			k++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (k);
}

static void	free_partial(char **res, int k)
{
	while (k--)
		free(res[k]);
}

static int	fill_split(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			res[k] = get_word(s, j, i);
			if (!res[k])
				return (free_partial(res, k), 0);
			k++;
		}
	}
	res[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	if (!fill_split(res, s, c))
		return (free(res), NULL);
	return (res);
}

// int	main(void)
// {
// 	char str[] = "hola senon,, aqui, no me,,,,, sientese , se;ora,";
// 	char **news;
// 	int i = 0;

// 	news = ft_split(str, ',');
// 	while (news[i])
// 		printf("%s\n", news[i++]);
// 	while (news[i])
// 		free(news--);
// 	return (0);
// }