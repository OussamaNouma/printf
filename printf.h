/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onouma <onouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:00:29 by onouma            #+#    #+#             */
/*   Updated: 2024/06/13 18:40:21 by onouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# define hexbase "0.123456789abcdef"
# define base "0123456789"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchr(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n, char * str);
size_t	ft_strlen(char *str);
#endif