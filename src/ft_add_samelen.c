/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_samelen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 23:46:58 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/27 00:05:15 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_addsamelen(char *nb1, char * nb2)
{
	char	*result;
	int		nbr;
	int		n1;
	int		n2;
	int		ret;

	n1 = ft_strlen(n1);
	n2 = n1;
	len = n1 + 1;
	result = ft_strnew(len);
	ret = 0;
	while (len >= 0 &&)
	{
		nbr = (nb1[n1] - '0') + (nb2[n2]) + ret;
		if (nbr > 9)
		{
			result[len] = (nbr % 10) + '0';
			ret = 1;
		}
		else
			result
	}
	return (result);
}
