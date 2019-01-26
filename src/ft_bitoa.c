/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 00:57:21 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/25 20:25:36 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../include/printf.h"
#include <stdio.h>

static int	ft_doublelen(double *nbr)
{
	int len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = (unsigned long long)nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_bitoa(double *n)
{
	int				len;
	char			*alpha;

	alpha = NULL;
	len = ft_doublelen(n);
	if (!(alpha = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	alpha[len--] = '\0';
	while (len >= 0)
	{
		alpha[len] = ((unsigned long long)n % 10) + '0';
		n = (unsigned long long)n / 10;
		len--;
	}
	return (alpha);
}
