/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:00:29 by onouma            #+#    #+#             */
/*   Updated: 2024/06/19 16:49:13 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXBASE "0123456789abcdef"
# define BASE "0123456789"
# define HEXBASEMAJ "0123456789ABCDEF"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchr(char c);
int	ft_putstr(char *str);
int	ft_putnbr_multi(unsigned int n, char format);
size_t	ft_strlen(char *str);
int	ft_putnbr(int n);
int	ft_putptr(unsigned long long n);
int		ft_printf(const char *, ...);
#endif