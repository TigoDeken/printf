/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:23 by tdeken            #+#    #+#             */
/*   Updated: 2022/11/15 10:55:58 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		input_handling(const char *str, va_list arg, int length);
void	converter(const char *str, int *length, va_list arg);
void	c_type(va_list arg, int *length);
void	s_type(va_list arg, int *length);
void	d_i_type(va_list arg, int *length);
void	u_type(va_list arg, int *length);
void	x_type(va_list arg, int *length, const char *str);
void	p_type(va_list arg, int *length, const char *str);
int		ft_putchar(char c, int *length);
void	ft_putnbr(int nb, int *length);
void	ft_putuns(unsigned int nb, int *length);
void	ft_puthex(unsigned long long nb, int *length, const char *str);

#endif