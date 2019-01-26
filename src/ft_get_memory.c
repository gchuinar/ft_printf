/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 04:10:55 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/26 04:11:01 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../include/printf.h"

static char	ft_putnbr_hex(int octet, int rem)
{
	char *base = "0123456789abcdef";

	if (rem > 1)
		return ft_putnbr_hex(octet >> 4, rem - 1);
	return (base[octet % 16]);
}

char	*ft_get_memory(const void *addr, size_t size)
{
	size_t i;
	size_t a;
	unsigned char const *ptr = addr;
	char	*str;
	int		k;

	k = 0;
	i = 0;
	str = ft_strnew(size + 2);
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			str[k] = ft_putnbr_hex(*(ptr + i + a), 2);
			k++;
			str[k] = ft_putnbr_hex(*(ptr + i + a), 1);
			k++;
			a++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}
