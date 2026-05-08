/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:10:02 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 20:22:15 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    ft_capitalize(unsigned int i, char *s)
// {
//     if (s[i] >= 'a' && s[i] <= 'z')
//     {
//         s[i] = s[i] -32;
//     }
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
//     char    str[] = "siempre despierto";
//     ft_striteri(str, &ft_capitalize);
//     printf("%s\n", str);
//     return (0);
// }