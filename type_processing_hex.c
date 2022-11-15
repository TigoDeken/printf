/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_processing_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:40:42 by tdeken            #+#    #+#             */
/*   Updated: 2022/11/15 10:55:11 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	x_type(va_list arg, int *length, const char *str)
{
	unsigned int	nb;

	nb = va_arg(arg, unsigned int);
	ft_puthex(nb, length, str);
}

void	p_type(va_list arg, int *length, const char *str)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long long);
	ft_putchar('0', length);
	ft_putchar('x', length);
	ft_puthex(address, length, str);
}
