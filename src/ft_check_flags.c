/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 09:59:16 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 16:09:47 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_check_flags(char **format, t_flags *opt)
{
	if (**format == '#' || **format == '0' || **format == ' ' || **format == '+'
			|| **format == '-')
	{
		if (**format == '#')
			opt->diese = 1;
		else if (**format == '0')
			opt->zero = 1;
		else if (**format == ' ')
			opt->esp = 1;
		else if (**format == '+')
			opt->plus = 1;
		else if (**format == '-')
			opt->moins = 1;
		if (opt->moins == 1)
			opt->zero = 0;
		(*format)++;
		return (ft_check_flags(format, opt));
	}
	return (*format);	
}

char	*ft_check_prefix(char **format, t_flags *opt)
{
	if (**format == 'h' && *(*format)++ == 'h')
	{
		opt->e_prefix = hh;
		return ((*format) + 2);
	}
	else if (**format == 'l' || *(*format)++ == 'l')
	{
		opt->e_prefix = ll;
		return ((*format) + 2);
	}
	else if (**format == 'l' || **format == 'h' || **format == 'j'
		   	|| **format == 'z')
	{
		if (**format == 'h')
			opt->e_prefix = h;
		else if (**format == 'l')
			opt->e_prefix = l;
		else if (**format == 'j')
			opt->e_prefix = j;
		else if (**format == 'z')
			opt->e_prefix = z;
		return ((*format)++);
	}
	return (*format);	
}

char	*ft_check_precis(char **format, t_flags *opt)
{
	int	precis;

	if (**format == '.')
	{
		(*format)++;
		while (ft_isdigit(**format))
		{
			opt->nbr_precis = (opt->nbr_precis * 10) + (**format - '0');
			(*format)++;
		}
		opt->precis = 1;
	}
	return (*format);
}
