/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:59:49 by onouma            #+#    #+#             */
/*   Updated: 2024/06/13 18:46:20 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putnbr(int n, char * str)
{
	unsigned int	nbr;
	int	baselen;

	baselen = ft_strlen(str);
	if(n < 0)
	{
		ft_putchr('-');
		nbr = (unsigned int)n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr(nbr / baselen , str);
	ft_putchr("0123456789"[nbr % baselen]);
	
}
/*
#include <stdio.h>
int main() {
    // Test case 1: Positive number
    int num1 = 123;
    printf("Test case 1: ");
	printf("\n");
    ft_putnbr(num1);
    printf("\n");

    // Test case 2: Negative number
    int num2 = -456;
    printf("Test case 2: ");
	printf("\n");
    ft_putnbr(num2);
    printf("\n");

    // Test case 3: Zero
    int num3 = 0;
    printf("Test case 3: ");
	printf("\n");
    ft_putnbr(num3);
    printf("\n");

    return 0;
}
*/