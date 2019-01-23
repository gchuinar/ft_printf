/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 04:21:51 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/16 04:23:47 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

unsigned long long	ft_atoi_ull(const char *str)
{
	int	i;
	unsigned long long	result;

	i = 0;
	result = 0;
	while ((((str[i] > 8 && str[i] < 14) || str[i] == ' ') && (str[i] != '\0')))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (result);
}
