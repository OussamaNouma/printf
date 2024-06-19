/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_multi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:59:49 by onouma            #+#    #+#             */
/*   Updated: 2024/06/19 16:50:30 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_len(char format)
{
	unsigned int	baselen;

	baselen = 0;
	if (format == 'd' || format == 'i' || format == 'u')
		baselen = ft_strlen(BASE);
	else if (format == 'x')
		baselen = ft_strlen(HEXBASE);
	else if (format == 'X')
		baselen = ft_strlen(HEXBASEMAJ);
	return (baselen);
}

int	ft_putnbr_multi(unsigned int n, char format)
{
	unsigned int	nbr;
	unsigned int	len;

	nbr = 0;
	len = ft_base_len(format);
	nbr = (unsigned int)n;
	if (nbr >= len)
		ft_putnbr_multi(nbr / len, format);
	if (format == 'x')
		ft_putchr(HEXBASE[nbr % len]);
	else if (format == 'X')
		ft_putchr(HEXBASEMAJ[nbr % len]);
	else if (format == 'u')
		ft_putchr(BASE[nbr % len]);
		
	return (ft_strlen(nbr));
}
