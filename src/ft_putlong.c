/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 19:12:52 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/15 01:03:38 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_putlong(long nbr)
{
		unsigned long nb;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		nb = nbr;
		if (nb > 9)
			ft_putlong(nb / 10);
		ft_putchar((nb % 10) + '0');
}
