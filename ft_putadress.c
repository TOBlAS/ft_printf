/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 22:49:11 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 23:09:36 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putadress(unsigned long nb, char *base)
{
	int				nbr;
	unsigned long	base_len;

	nbr = 0;
	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		nbr += ft_putadress(nb / base_len, base);
		nbr += ft_putchar(base[nb % base_len]);
	}
	else
	{
		nbr += ft_putstr("0x");
		nbr += ft_putchar(base[nb]);
	}
	return (nbr);
}
