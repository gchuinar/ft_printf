/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 01:45:14 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/25 05:10:08 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../include/printf.h"

static char	ft_putnbr_hex(int octet, int rem)
{
	char *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet >> 4, rem - 1);
	return (base[octet % 16]);
}

static char	sp_putchar(unsigned char const *ptr)
{
	char const c = *ptr;

	if (' ' <= c && c <= '~')
		return (*ptr);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t i;
	size_t a;
	unsigned char const *ptr = addr;
	char	*str;
	int		k;

	str = ft_strnew(32);
	k = 0;
	i = 0;
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			str[k] = ft_putnbr_hex(*(ptr + i + a), 2);
			a++;
			k++;
		}
		while (a < 16)
			a++;
		a = 0;
		while (a < 16 && a + i < size)
		{
			str[k] = sp_putchar(ptr + a + i);
			a++;
			k++;
		}
		write(1, "\n", 1);
		i += 16;
	}
	ft_putstr("str = ");
	ft_putendl(str);
	write(1, "\n", 1);
}
