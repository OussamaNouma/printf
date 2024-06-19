/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:34:32 by onouma            #+#    #+#             */
/*   Updated: 2024/06/19 16:51:07 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long n)
{
	static int	ptr = 1;

	if (ptr == 1)
	{
		ft_putstr("0x");
		ptr = 0;
	}
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putchr(HEXBASE[n % 16]);
	}
	else
	{
		ft_putchr(HEXBASE[n]);
	}
	return (ft_strlen(n));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int var = 55;

// 	printf("Adresse de var en utilisant printf : %p\n", (void *)&var);
// 	printf("Adresse de var en utilisant ft_putptr : \n");
// 	ft_putptr((unsigned long long)&var);
// 	printf("\n");
// }