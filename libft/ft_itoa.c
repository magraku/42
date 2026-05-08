/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 01:44:02 by gerramir          #+#    #+#             */
/*   Updated: 2026/04/28 17:07:17 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_csize(int nb)
{
	int		i;
	long	n;

	n = nb;
	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		count;
	long	nb;

	nb = n;
	count = ft_csize(n);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	i = count - 1;
	str[count] = '\0';
	if (nb == 0)
		return (str[0] = '0', str);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	i = -699;
// 	str = ft_itoa(i);
// 	printf("%s\n", str);
// 	free (str);
// 	return (0);
// }
