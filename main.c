/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeken <tdeken@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:17:56 by tdeken            #+#    #+#             */
/*   Updated: 2022/11/15 10:32:05 by tdeken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c;

	c = 'b';
	ft_printf("The char is: %c and the string is: %s\n", 'a', "Hello there!");
	printf("The char is: %c and the string is: %s\n\n", 'a', "Hello there!");
	ft_printf("The pointer in hex: %p and double: %d\n", &c, 100);
	printf("The pointer in hex: %p and double: %d\n", &c, 100);
	ft_printf("The integer: %i and the unsigned decimal: %u\n", 101, 102);
	printf("The integer: %i and the unsigned decimal: %u\n", 101, 102);
	ft_printf("The small hex: %x and the big hex: %X\n", 1456, 1456);
	printf("The small hex: %x and the big hex: %X\n", 1456, 1456);
	ft_printf("The percentage sign: %%\n");
	printf("The percentage sign: %%\n\n");
	return (0);
}
