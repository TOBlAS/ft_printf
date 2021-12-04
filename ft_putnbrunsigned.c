/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 22:24:47 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 22:31:08 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrunsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size ++;
		n *= -1;
	}
	if (n < 10)
		size += ft_putchar(n + '0');
	else
	{
		size += ft_putnbrunsigned(n / 10);
		size += ft_putchar(n % 10 + '0');
	}
	return (size);
}
