/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 00:27:01 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/25 05:09:19 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/printf.h"

void	ft_add_bin(void *nbr)
{
	unsigned char const	*ptr;

	ptr = nbr;
	printf("*nbr = %p\n", &ptr);
	ft_putendl(ft_convert_u(ft_atoi_ull((const char*)ptr), 'i'));
}
