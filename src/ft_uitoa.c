/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:19:45 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/16 21:41:15 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../include/printf.h"
#include <stdio.h>

static int	ft_intlen(unsigned long long nbr)
{
	int len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_uitoa(unsigned long long n)
{
	int				len;
	char			*alpha;

	alpha = NULL;
	len = ft_intlen(n);
	if (!(alpha = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	alpha[len--] = '\0';
	while (len >= 0)
	{
		alpha[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (alpha);
}
