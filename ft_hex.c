/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:03:44 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/29 00:18:32 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_hex(char *hex, unsigned int nbr)
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
		count += ft_hex(hex, nbr / 16);
		count += ft_hex(hex, nbr % 16);
	}
	return (count);
}
