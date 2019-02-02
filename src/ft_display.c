/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 15:58:40 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 16:46:50 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

static void	setup_arr(t_handler *handlers)
{
	display['%'] = &ft_display_perc;
	display['d'] = &ft_putlonglong;
	display['D'] = &ft_putlonglong;
	display['i'] = &ft_putlonglong;
	display['I'] = &ft_putnbr;
	display['o'] = &ft_display_oct;
	display['O'] = &ft_display_Oct;
	display['u'] = &ft_uputnbr;
	display['U'] = &ft_uputnbr;
	display['x'] = &ft_display_perc;
	display['X'] = &ft_display_perc;
	display['c'] = &ft_display_perc;
	display['C'] = &ft_display_perc;
	display['s'] = &ft_display_perc;
	display['S'] = &ft_display_perc;
	display['p'] = &ft_display_perc;
	display['P'] = &ft_display_perc;
}

t_handler	ft_printf_get_handler(char c)
{
	static t_handler	*handlers = NULL;

	if (handlers == NULL)
	{
		handlers = ft_memalloc(sizeof(*handlers) * 256);
		if (handlers != NULL)
			setup_arr(handlers);
	}
	return (handlers[(int)c]);
}
