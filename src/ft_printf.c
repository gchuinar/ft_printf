/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:44:33 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 16:47:05 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/printf.h"
#include <stdlib.h>

static int	ft_check_printf_option(char c)
{
	if (c == 'd' || c == 'i' ||	c == 'x' || c == 'X' || c == 'o' || c == 'C'	\
		   || c == 'l' || c == 'f' || c == 'F')
		return (1);
	return (0);
}
/*
static int	ft_without_space(char c)
{
	if (c == '%' || c == 'o' || c == 'O' || c == 'x' || c == 'X')
	{
		ft_putendl("error");
	}
	return (1);
}*/

int	ft_get_opt(char **format, va_list *args, t_flags *opt)
{
	return (0);
}


static int	ft_rd_printf(const char *format, va_list *args, int next)
{
	char		*next_arg;
	t_flags		opt;
	int			nbr_opt;

	next_arg = ft_strchr(format, 37);
	if (*format == '\0')
		return (next);
	if (next_arg == NULL)
	{
		ft_putstr((char*)format);
		return (next + ft_strlen(format));
	}
	else if (next_arg > format)
	{
		ft_putnstr(format, next_arg - format);
		return (ft_rd_printf(next_arg, args, next + (next_arg - format)));
	}
	else
	{
		ft_bzero(&opt, sizeof(opt));
		if ((nbr_opt = ft_get_opt((char**)&format, args, &opt) == -1))
			return (-1);
		else
			return (ft_rd_printf(format, args, next + nbr_opt));
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	retour;

	va_start(args, format);
	retour = ft_printf(format, args);
	va_end(args);
	return (retour);
}

int     main(void)
{
	float	d = 123.456;
	int		g = 123;
	double	f = 123;
	short	sh = 12;
	unsigned char	us = 65;

	printf("[Printf] = %O\n", g);
//	ft_printf("[ft_printf] = %d ou alors il est = %d\n", g, g);
	return (0);
}
