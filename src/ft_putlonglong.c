/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlonglong.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:13:26 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/15 01:05:20 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_putlonglong(long long nbr)
{
		unsigned long long nb;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		nb = nbr;
		if (nb > 9)
			ft_putlonglong(nb / 10);
		ft_putchar((nb % 10) + '0');
}
