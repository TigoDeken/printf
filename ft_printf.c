/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:34:11 by tdeken            #+#    #+#             */
/*   Updated: 2022/11/15 10:54:00 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	converter(const char *str, int *length, va_list arg)
{
	if (*str == 'c')
		c_type(arg, length);
	else if (*str == 's')
		s_type(arg, length);
	else if (*str == 'd' || *str == 'i')
		d_i_type(arg, length);
	else if (*str == 'u')
		u_type(arg, length);
	else if (*str == 'x' || *str == 'X')
		x_type(arg, length, str);
	else if (*str == 'p')
		p_type(arg, length, str);
	else
		ft_putchar(*str, length);
}

int	input_handling(const char *str, va_list arg, int length)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			converter(str, &length, arg);
			str++;
		}
		else
			ft_putchar(*str++, &length);
	}
	return (length);
}

int	ft_printf(const char *format, ...)
{
	int		length;
	va_list	arg;

	length = 0;
	va_start(arg, format);
	length = input_handling(format, arg, length);
	va_end(arg);
	return (length);
}
