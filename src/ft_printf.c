/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:44:33 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 02:52:14 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/printf.h"
#include <stdlib.h>

static int	ft_check_printf_option(char c)
{
	if (c == 'd' || c == 'i' ||	c == 'x' || c == 'X' || c == 'o' || c == 'C' || \
			c == 'l')
		return (1);
	return (0);
}
/*
static int	ft_without_space(char c)
{
	c == '%';
		c == 'x';
		c == 'X';
		return (0);
}

int	ft_printf_OK(const char *str, ...)
{

	return (1);
}*/
static int	ft_printf(const char *str, ...)
{
	int     i;
	int		j;
	va_list param;

	i = 0;
	j = 0 ;
//	if (!(ft_printf_OK))
//	{
//		ft_putendl("error");
//		exit (EXIT_FAILURE);
//	}
	va_start(param, str);
	while (str[i] != '\0')
	{
		while (str[i] == '%' && str[i] != '\0')
		{
			while (str[i + 1] == ' ' && str[i] != '\0')
			{
				j++;
				i++;
			}
			if (ft_check_printf_option(str[i + 1]) != 1)
			{
				j = 0;
			}
			if (j > 0)
			{
				ft_putchar(' ');
				j--;
			}
			if (str[i + 1] == 's')
			{
				ft_putstr(va_arg(param, char*));
				i += 2;
			}
			else if (str[i + 1] == 'a' || str[i + 1] == 'A')
			{
				ft_display_a_A(str, param, i, 6);
				i += 2;
			}
			else if (str[i + 1] == 'd'|| str[i +1] == 'i')
			{
				ft_putnbr(va_arg(param, int));
				i += 2;
			}
			else if (str[i + 1] == '%')
			{
				ft_putchar('%');
				i += 2;
			}
			else if (str[i + 1] == 'c')
			{
				ft_putchar(va_arg(param, int));
				i += 2;
			}
			else if (str[i + 1] == 'f')
			{
				i += 2;
			}
			else if (str[i + 1] == 'e' || str[i + 1] == 'E')
			{
				i += 2;
			}
			else if (str[i + 1] == 'o')
			{
				ft_putstr(ft_convert_u(va_arg(param, int), str[i + 1]));
				i += 2;
			}
			else if (str[i + 1] == 'l')
			{
				ft_display_l(str, param, i , 0);
				i += 3;
			}
			else if (str[i + 1] == 'l' && str[i +2] == 'l' && (str[i + 3] == 'i' || str[i + 3] == 'd'))
			{
				ft_putlonglong(va_arg(param, long long));
				i += 4;
			}
			else if (str[i + 1] == 'h' && str[i + 2] != 'h')
			{
				ft_display_h(str, param, i, 0);
				i += 3;
			}
			else if (str[i + 1] == 'b')
			{
				ft_putstr(ft_convert_u(va_arg(param, int), str[i + 1]));
				i += 2;
			}
			else if (str[i + 1] == 'u')
			{
				ft_uputnbr(va_arg(param, unsigned int));
				i += 2;
			}
			else if (str[i + 1] == 'x')
			{
				ft_putstr(ft_convert_u(va_arg(param, int), str[i + 1]));
				i += 2;
			}
			else if (str[i + 1] == 'X')
			{
				ft_putstr(ft_convert_u(va_arg(param, int), str[i + 1]));
				i += 2;
			}
			else
			{
				ft_putendl("error");
				return (-1);
			}
		}
		ft_putchar(str[i]);
		i++;
	}
	va_end(param);

	return (0);
}
/*
int     main(void)
{
	char    str1[] = "coucou";
	char    str2[] = "les";
	char    str3[] = "loulou";
	float	a = -123.456;
	float	b = 99999999999999999999999.12345678911;
	float	m = 12345678911131517192123.12345678911;

	long	c = 327668457;
	char	C = 65;
	short	x = 12345;
	int		d = 5;
	int		g = 0;

//	9154391252037992972288
//	9223372036854775807

	printf("[Printf] =    %.2f \n", b);
	ft_printf("[ft_printf] = %f \n", b);
	return (0);
}*/
