/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putscient.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 20:55:57 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/15 00:58:50 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static void	ft_pute(char c, int signe, int count)
{
	ft_putchar(c);
	if (signe == 1)
		ft_putchar('-');
	else
		ft_putchar('+');
	if (count < 10)
		ft_putchar('0');
	ft_putnbr(count);
}

void	ft_putscient(double	nbr, int i, char c)
{
	int signe;
	int	count;

	signe = 0;
	count = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		count++;
	}
	while (nbr < 1)
	{
		signe = 1;
		nbr *= 10;
		count++;
	}
	ft_putfloat(nbr, i);
	ft_pute(c, signe, count);
}
