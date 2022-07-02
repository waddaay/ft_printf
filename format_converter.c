/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:31:48 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/29 00:16:58 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	format_converter(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	if (c == 'x')
		count = ft_hex(L_HEX, va_arg(args, unsigned long));
	if (c == 'X')
		count = ft_hex(U_HEX, va_arg(args, unsigned long));
	if (c == 'p')
		count = ft_phex(va_arg(args, void *));
	return (count);
}
