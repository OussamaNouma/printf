/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:59:49 by onouma            #+#    #+#             */
/*   Updated: 2024/06/18 19:33:46 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_len(char format)
{
	unsigned int	baselen;

	if (format == 'd' || format == 'i' || format == 'u')
		baselen = ft_strlen(BASE);
	if (format == 'x')
		baselen = ft_strlen(HEXBASE);
	if (format == 'X')
		baselen = ft_strlen(HEXBASEMAJ);
	return (baselen);
}

void	ft_putnbr(long n, char format)
{
	unsigned int	nbr;
	unsigned long	max_uint;
	unsigned int	len;
	int				max_int;
	int				min_int;	

	max_int = 2147483647;
	min_int = -2147483648;
	nbr = 0;
	len = ft_base_len(format);
	max_uint = 4294967296;
	if (n < 0 && (format == 'd' || format == 'i'))
	{
		ft_putchr('-');
		nbr = n * -1;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= len)
		ft_putnbr(nbr / len, format);
	if (format == 'x')
		ft_putchr(HEXBASE[nbr % len]);
	else if (format == 'X')
		ft_putchr(HEXBASEMAJ[nbr % len]);
	else if ((format == 'd' || format == 'i') && (nbr <= max_int && nbr >= min_int))
		ft_putchr(BASE[nbr % len]);
	else if (format == 'u' || format == 'x' || format == 'X')
	{
		nbr = nbr % max_uint;
		ft_putchr(BASE[nbr % len]);
	}	
}

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	// Test for 'd' format
	printf("Testing 'd' format:\n");
	ft_putnbr(123, 'd'); // Expected output: 123
	printf("\n");
	ft_putnbr(-456, 'd'); // Expected output: -456
	printf("\n");
	ft_putnbr(0, 'd'); // Expected output: 0
	printf("\n");

	// Test for 'i' format
	printf("Testing 'i' format:\n");
	ft_putnbr(789, 'i'); // Expected output: 789
	printf("\n");
	ft_putnbr(-987, 'i'); // Expected output: -987
	printf("\n");
	ft_putnbr(0, 'i'); // Expected output: 0
	printf("\n");

	// Test for 'u' format
	printf("Testing 'u' format:\n");
	ft_putnbr(123, 'u'); // Expected output: 123
	printf("\n");
	ft_putnbr(4294967296, 'u'); // Expected output: 0
	printf("\n");
	ft_putnbr(0, 'u'); // Expected output: 0
	printf("\n");

	// Test for 'x' format
	printf("Testing 'x' format:\n");
	ft_putnbr(123, 'x'); // Expected output: 7b
	printf("\n");
	ft_putnbr(456, 'x'); // Expected output: 1c8
	printf("\n");
	ft_putnbr(0, 'x'); // Expected output: 0
	printf("\n");

	// Test for 'X' format
	printf("Testing 'X' format:\n");
	ft_putnbr(123, 'X'); // Expected output: 7B
	printf("\n");
	ft_putnbr(456, 'X'); // Expected output: 1C8
	printf("\n");
	ft_putnbr(0, 'X'); // Expected output: 0
	printf("\n");

	return (0);
}