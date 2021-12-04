/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:50:11 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 23:09:12 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pourcent(char c, va_list arg)
{
	int		i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (c == 'd')
		i += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		i += ft_putnbrunsigned(va_arg(arg, unsigned int));
	else if (c == 'p')
		i += ft_putadress(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (c == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (c == 'x')
		i += ft_puthexa(va_arg(arg, int), "0123456789abcdef");
	else if (c == 'X')
		i += ft_puthexa(va_arg(arg, int), "0123456789ABCDEF");
	else if (c == '%')
		i += ft_putchar('%');
	va_end(arg);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printable;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	printable = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			printable += ft_pourcent(str[i + 1], arg);
			i++;
		}
		else
			printable += ft_putchar(str[i]);
		i++;
	}
	return (printable);
}
