/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:00:29 by onouma            #+#    #+#             */
/*   Updated: 2024/06/18 19:20:13 by onouma           ###   ########.fr       */
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

void	ft_putchr(char c);
void	ft_putstr(char *str);
void	ft_putnbr(long n, char format);
int		ft_base_len(char format);
size_t	ft_strlen(char *str);
#endif