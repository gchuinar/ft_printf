/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_h.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 03:24:31 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 02:54:44 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdlib.h>

void	ft_display_h(const char *str, va_list param, int i, int h)
{
	i++;
	if (str[i] == 'h' && h < 2)
		ft_display_h(str, param, i, (h + 1));
	else if (str[i] == 'u' && h <= 2)
		ft_uputnbr(va_arg(param, unsigned int));
//	else if ((str[i] == 'o' && h <= 1)
//		ft_uputnbr(va_arg(param, int)));
	else
	{
		ft_putendl("error");
		exit (EXIT_FAILURE);
	}
}
