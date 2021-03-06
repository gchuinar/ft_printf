/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 00:20:55 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/01 08:40:26 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_putfloat_hexa(double nbr, int i, char c)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	ft_uputlonglong((unsigned long long)nbr);
	ft_putchar('\n');
	ft_putendl(ft_convert_u((int)nbr, c));
	nbr -= (unsigned long long)nbr;
	while (i > 0)
	{
		nbr *= 10;
		i--;
	}
	ft_putendl(ft_convert_u((int)nbr, c));
}
