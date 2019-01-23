/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:58:10 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/13 03:24:01 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdlib.h>

void	ft_display_l(const char *str, va_list param, int i, int l)
{
	i++;
	if (str[i] == 'l' && l < 2)
		ft_display_l(str, param, i, (l + 1));
	else if ((str[i] == 'i' || str[i] == 'd') && l == 1)
		ft_putlong(va_arg(param, long));
	else if ((str[i] == 'i' || str[i] == 'd') && l == 2)
		ft_putlonglong(va_arg(param, long long));
	else
	{
		ft_putendl("error");
		exit (EXIT_FAILURE);
	}
}
