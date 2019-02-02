/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_oct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 16:10:11 by gchuinar          #+#    #+#             */
/*   Updated: 2019/02/02 16:46:59 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

void	ft_display_oct(int nbr)
{
	ft_putstr(ft_convert_u(nbr, 'o'));
}

void	ft_display_Oct(int nbr)
{
	ft_putstr(ft_convert_u(nbr, 'O'));
}
