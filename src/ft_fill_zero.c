/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:31:19 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/23 00:28:06 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_fill_A(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 'A';
		i++;
	}
}

void	ft_fill_zero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '0';
		i++;
	}
}
