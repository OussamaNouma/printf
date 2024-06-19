/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:59:51 by onouma            #+#    #+#             */
/*   Updated: 2024/06/19 16:50:53 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	unsigned int	nbr;

	nbr = 0;
	if (n < 0)
	{
		ft_putchr('-');
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchr(nbr % 10 + '0');

	return (ft_strlen(nbr));	
}
