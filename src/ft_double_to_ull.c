/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_to_ull.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 00:21:57 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/17 01:34:35 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static char *ft_printnbr(double nbr, int i)
{
	double				nb;
	unsigned long long	max;
	unsigned long long	n;
	int					j;

	nb = nbr;
	max = 10;
	j = i;
	while (j > 0)
	{
		nb /= max;
		j--;
	}
	n = nb;
	nb = n * ft_power_dbl(max, i);
	return (ft_uitoa(n));
}

char	*ft_double_to_ull(double nbr, int count, char *str)
{
	double	tab;
	int		i;
	unsigned long long	max;
	unsigned long long	nb;

	i = 0;
	tab = nbr;
	max = 10;
	while (tab > max)
	{
		i++;
		tab /= max;
	}
	while (nbr > 9)
	{
		nbr /= 10;
	}
	printf("nbr = %f\n", nbr);
	while (count > 0)
	{
		ft_putnbr((int)nbr);
		ft_putchar('\n');
		count--;
		nbr -= (int)nbr;
		nbr *= 10;
	}
//	printf("nbr avant le while = %f\n", nbr);
	while (i > 0)
	{
		str = ft_strcat(str, ft_printnbr(nbr, i));
		tab = ft_atoi_ull(ft_printnbr(nbr, i)) * ft_power_dbl(max, (i - 1));
//		printf("nbr avant soustraction = %f\n", nbr);
		nbr -= (tab);
		i--;
//		printf("tab = %f\n", tab * 10);
//		printf("nbr = %f\n", nbr);
	}
	str = ft_strcat(str, ft_printnbr(nbr, i));
	return (str);
}
