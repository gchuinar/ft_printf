/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputlonglong.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 04:58:21 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/15 04:49:25 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_uputlonglong(unsigned long long nbr)
{
	if (nbr > 10)
		ft_uputlonglong(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}
