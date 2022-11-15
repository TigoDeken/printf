/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_processing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:34:02 by tdeken            #+#    #+#             */
/*   Updated: 2022/11/15 10:32:15 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_type(va_list arg, int *length)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar(c, length);
}

void	s_type(va_list arg, int *length)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	while (*s)
		ft_putchar(*s++, length);
}

void	d_i_type(va_list arg, int *length)
{
	int	nb;

	nb = va_arg(arg, int);
	ft_putnbr(nb, length);
}

void	u_type(va_list arg, int *length)
{
	unsigned int	nb;

	nb = va_arg(arg, unsigned int);
	ft_putuns(nb, length);
}
