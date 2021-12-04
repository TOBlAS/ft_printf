/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:57:18 by tcaborde          #+#    #+#             */
/*   Updated: 2021/12/03 22:20:36 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	cmpt;

	i = 0;
	cmpt = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		cmpt += ft_putchar(str[i]);
		i++;
	}
	return (cmpt);
}
