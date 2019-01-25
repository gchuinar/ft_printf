/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:49:04 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/25 01:32:58 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdlib.h>
char	*ft_convert_u(int nbr, char c)
{
	unsigned int	nb;
	if (nbr < 0)
	{
		nb = 4294967295 + nbr + 1;
	}
	else
	{
		nb = nbr;
	}
	if (c =='X')
		return (ft_convert_base(ft_uitoa(nb), "0123456789ABCDEF", "0123456789"));
	else if (c == 'x')
		return (ft_convert_base(ft_uitoa(nb), "0123456789abcdef", "0123456789"));
	else if (c == 'a')
	{
		return (ft_convert_base(ft_uitoa(nb), "0123456789abcdef", "0123456789"));
	}
	else if (c == 'A')
	{
		return (ft_convert_base(ft_uitoa(nb), "0123456789ABCDEF", "0123456789"));
	}
	else if (c == 'b')
		return (ft_convert_base(ft_uitoa(nb), "01", "0123456789"));
	else if (c == 'i')
		return (ft_convert_base(ft_uitoa(nb), "01", "0123456789abcdef"));
	else if (c == 'o')
		return (ft_convert_base(ft_uitoa(nb), "01234567", "0123456789"));
	ft_putendl("error");
	exit (EXIT_FAILURE);
}
