/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_a_A.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 00:03:38 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 19:24:44 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_display_a_A(const char *str, va_list param, int i, int s)
{
	i++;
	if (str[i] == 'a' || str[i] == 'A')
		ft_putfloat_hexa(va_arg(param, double), i, str[i]);
	else
	{
		ft_putendl("error");
		exit (EXIT_FAILURE);
	}
}
