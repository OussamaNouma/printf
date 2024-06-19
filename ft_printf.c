/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:24:17 by onouma            #+#    #+#             */
/*   Updated: 2024/06/19 16:46:11 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(args, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(args, char *));
			else if (format[i] == 'c')
			return (ft_putchr(va_arg(args, int)));
			else if (format[i] == 'p')
				ft_putptr(va_arg(args, unsigned long long));
			else if (format[i] == 'x')
				ft_putnbr_multi(va_arg(args, unsigned int), 'x');
			else if (format[i] == 'X')
				ft_putnbr_multi(va_arg(args, unsigned int), 'X');
			else if (format[i] == 'u')
				ft_putnbr_multi(va_arg(args, unsigned int), 'u');
			else if (format[i] == '%')
				ft_putchr('%');
			else
				ft_putchr(format[i]);
		}
		else
			ft_putchr(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}