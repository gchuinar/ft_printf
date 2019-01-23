/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 20:23:39 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/15 00:36:22 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <unistd.h>

static void	ft_putnbr_hex(int octet, int rem)
{
	char const *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet >> 4, rem - 1);
	write(1, base + (octet % 16), 1);
}

static void	sp_putchar(unsigned char const *ptr)
{
	char const c = *ptr;

	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

static void	ft_print_memory(const void *addr, size_t size)
{
	size_t i;
	size_t a;
	unsigned char const *ptr = addr;

	i = 0;
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_putnbr_hex(*(ptr + i + a), 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		while (a < 16)
		{
			write(1, "  ", 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		a = 0;
		while (a < 16 && a + i < size)
		{
			sp_putchar(ptr + a + i);
			a++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}

int	main(void)
{
	size_t	size;
	double	f;
	char	**tab;
	int		i;
	int		exp;
	int		sign;
	char	*mantisse;

	sign = 1;
	i = 0;
	size = 8;
	f = 5.2;
	ft_print_memory(&f, size);
	ft_putchar('\n');
	ft_putendl(ft_putbin(ft_convert_base("cdcccccccccc1440", "01", "0123456789abcdef")));
	if ((tab = (char**)malloc(sizeof(char*) * 4)))
	{
		if ((tab[0] = (char*)malloc(sizeof(char) * 2))
				|| (tab[1] = (char*)malloc(sizeof(char) * 9))   \
				|| (tab[2] = (char*)malloc(sizeof(char) * 24))) \
		{
			tab = ft_order_b("000011001100110011000001010001000000");
			while (tab[i] != '\0')
			{
				ft_putendl(tab[i]);
				i++;
			}
		}
		i = 0;
		exp = ft_atoi(ft_convert_base(tab[1], "0123456789", "01")) - 127;
		if (tab[0][0] == '1')
			sign = -1;
		ft_putendl(ft_convert_base(tab[2], "0123456789", "01"));
		mantisse = ft_convert_base(tab[2], "0123456789", "01");
		i = ft_atoi(mantisse);
		ft_putnbr(i);
		ft_putchar('\n');
		i = sign * (i) * 4;
		ft_putnbr(sizeof(double));
		ft_putchar('\n');
		return (0);
	}
}
