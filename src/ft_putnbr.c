/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:22:45 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:42:51 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}
