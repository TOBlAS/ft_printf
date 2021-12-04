/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:05:32 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 20:27:23 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		size += ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		size += ft_putchar(n + '0');
	}
	else
	{
		size += ft_putnbr(n / 10);
		size += ft_putchar(n % 10 + '0');
	}
	return (size);
}
