/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:56:22 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/05 16:30:44 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_arg(char c)
{
	int	count;

	if (c == 'c')
		(ft_putchar(va_arg(ap, char)));
	if (c == 's')
		(ft_putstr(va_arg(ap, char *)));
	if (c == 'p')
		(ft_putnbr_adress(va_arg(ap, void *)));
	if (c == 'd')
		(ft_putnbr(va_arg(ap, int)));
	if (c == 'i')
		(ft_putnbr_base(va_arg(ap, int)));
	if (c == 'u')
		(ft_putchar(va_arg(ap, unsigned int)));
	if (c == 'x')
		(ft_putnbr_base_lower(va_arg(ap, int)));
	if (c == 'X')
		(ft_putnbr_base_upper(va_arg(ap, int)));
	if (c == '%')
		(ft_putchar(va_arg(ap, c)));
	return (count);
}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == "%")
		{
			i++;
			count = count + find_arg(format[i]);
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count + i);
}

int	main(void)
{
	int i = 20;
	char f[] = "hola";
	int j = 9;
	ft_printf("t89his is %d, %s, %d", 657, f, j);
}