/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_samelen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 23:46:58 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/27 23:24:46 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>


char	*ft_addsamelen(char *nb1, char * nb2)
{
	char	*result;
	int		nbr;
	int		n1;
	int		n2;
	int		ret;
	int		len;

	n1 = ft_strlen(nb1);
	n1--;
	n2 = n1;
	len = n1 + 1;
	result = ft_strnew(len);
	ft_fill_zero(result, len);
	ret = 0;
	while (len > 0 || ret == 1)
	{
		if ( n1 >= 0)
		{
			nbr = (nb1[n1] - '0') + (nb2[n2] - '0') + ret;
		}
		else
			nbr = ret;
		if (nbr > 9)
		{
			result[len] = (nbr % 10) + '0';
			ret = 1;
		}
		else
		{
			result[len] = nbr + '0';
			ret = 0;
		}
		len--;
		n1--;
		n2--;
	}
	return (ft_decal_0(result));
}
