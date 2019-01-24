/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_b_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:48:54 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 03:57:45 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include	<stdio.h>

char	*ft_conv_b_d(char *str)
{
	char	*deci;
	unsigned long long	result;
	int	i;
	size_t	len;
//	int		power;

	i = 0;
	result = 1;
	len = ft_strlen(str);
	deci = ft_strdup("0");
/*	while (str[i] != '\0')
	{
		power = len - i;
		if (str[i] == '1')
		{
			if (--power > 0)
			{
				result = result << power;
				printf("result = %lld\n", result);
				printf("power = %d\n", power);
				deci = ft_strdup(ft_doop_str(deci, '+', ft_uitoa(result)));
				result = 1;
				printf("deci = %s\n", deci);
			}
		}
		i++;
	}*/
	return (deci);
}
