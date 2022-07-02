/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 02:00:25 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/29 00:20:24 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_hexa(char *hex, unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 15)
	{
		count++;
		ft_putchar(hex[nbr]);
	}
	else
	{
		count += ft_hexa(hex, nbr / 16);
		count += ft_hexa(hex, nbr % 16);
	}
	return (count);
}

int	ft_phex(void *p)
{
	ft_putstr("0x");
	return (2 + ft_hexa(L_HEX, (unsigned long)p));
}
