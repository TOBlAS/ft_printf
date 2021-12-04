/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:24:01 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 22:46:52 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(unsigned int nb, char *base)
{
	int				nbr;
	unsigned int	base_len;

	nbr = 0;
	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		nbr += ft_puthexa(nb / base_len, base);
		nbr += ft_putchar(base[nb % base_len]);
	}
	else
		nbr += ft_putchar(base[nb]);
	return (nbr);
}
