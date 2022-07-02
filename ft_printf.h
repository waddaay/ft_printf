/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywadday <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:29:57 by ywadday           #+#    #+#             */
/*   Updated: 2021/11/29 00:31:19 by ywadday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# define U_HEX "0123456789ABCDEF"
# define L_HEX "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_hex(char *hex, unsigned int nbr);
int	ft_phex(void *p);
int	ft_putchar(char c);
int	format_converter(char c, va_list args);

#endif
