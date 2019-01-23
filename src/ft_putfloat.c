/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 05:05:15 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/19 03:59:12 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static char *ft_printnbr(double nbr, int i)
{
	double              nb;
	unsigned long long  max;
	unsigned long long  n;
	int                 j;

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

static char	*ft_arrnbr(double nbr, int i)
{
	char	*str;
	int		j;
	unsigned long long	max;
	int	count;
	double	nb;

	j = 0;
	nb = nbr;
	max = 10;
	str = ft_strnew(i + 2);
	str[j] = '.';
	j++;
	while (nb > max)
	{
		nb /= max;
		count++;
	}
	//	printf("nbr = %f\n", nbr);
	while (count > 0)
	{
	nb = ft_atoi_ull(ft_printnbr(nbr, count)) * ft_power_dbl(max, count);
	nbr -= nb;
	count--;
	}
	while (i > 0)
	{
		nbr *= 10;
		str[j] = (((int)nbr % 10) + '0');
		nbr -= (int)nbr;
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
   static char *ft_fill_unit(char *str, double nb, int count)
   {
   int	i;
   unsigned long long	max;
   double 				nb;

   i = 0;
   max = 1000000000000000000;
   while (nbr > max)
   {

   }
   while (count > 0)
   {
   str[i] = ((int)nb + '0');
   nb -= (int)nb;
   nb *= 10;
   count--;
   i++;
   }
   str[i] = '.';
   i++;
   str[i] = '\0';
   return (str);
   }*/

void	ft_putfloat(double nbr, int i)
{
	int		count;
	double	nb;
	char 	*str;
	char	*str2;

	count = 0;
	nb = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	str = ft_strnew((size_t)count + 1);
	str = ft_double_to_ull(nbr, count, str);
	str2 = ft_arrnbr(nbr, i);
	str = ft_strjoin((const char*)str, (const char*)str2);
	ft_putstr(str);
}
