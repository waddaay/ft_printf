/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:05:48 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/29 00:59:41 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	char_is_format(char c)
{
	if (c == 'd' || c == 'c' || c == 'i' || c == 'u' || c == 'x'
		|| c == 'X' || c == 's' || c == 'p')
		return (1);
	return (0);
}

int	ft_strlen(const char *format)
{
	int	i;

	i = 0;
	while (format[i])
		i++;
	return (i);
}

int	print_all(const char *format, va_list args, int res)
{
	int	i;

	i = -1;
	while (++i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			if (format[i++] && format[i] == '%')
			{
				ft_putchar('%');
				res++;
			}
			if (format[i] && char_is_format(format[i]))
				res += format_converter(format[i], args);
		}
		else
		{
			ft_putchar(format[i]);
			res++;
		}
	}
	return (res);
}

int	ft_printf(const char *format, ...)
{
	int		res;
	va_list	args;

	res = 0;
	va_start(args, format);
	res = print_all(format, args, res);
	va_end(args);
	return (res);
}
