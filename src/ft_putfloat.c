/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 08:48:19 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/01 10:07:19 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static double	ft_arrondi(double nbr, int i)
{
	double	nb;
	int		j;

	nb = nbr;
	j = i;
	nbr -= (unsigned long long)nbr;
	while (j >= 0)
	{
		nbr *= 10;
		j--;
	}
	if (((unsigned long long)nbr % 10) > 5)
		nbr += 10;
	while (j < i)
	{
		nbr /= 10;
		j++;
	}
	nbr = (nbr - (unsigned long long)nbr) + (unsigned long long)nb;
	return (nbr);	
}

void	ft_putfloat(double nbr, int i)
{
	int	j;

	j = i;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	nbr = ft_arrondi(nbr, i);
	ft_uputlonglong((unsigned long long)nbr);
	nbr -= (unsigned long long)nbr;
	ft_putchar('.');
	while (i > 0)
	{
		nbr *= 10;
		i--;
	}
	ft_uputlonglong((unsigned long long)nbr);
	while (j > 1)
	{
		ft_putchar('0');
		j--;
	}
}
