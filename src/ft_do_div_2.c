/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_div.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 03:35:12 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/28 05:18:52 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static int	ft_rest(char *divid, char *divis, int i)
{
	if (divid[i + 1] == '\0')
	{
		return ((divid[i] - '0') * 10) / (divis[0] - '0');
	}
	else
		return (((divid[i] - '0') * 10) + divid[i + 1] - '0') / (divis[0] - '0');
}

char	*ft_do_div_2(char *divid, char *divis)
{
	char	*result;
	int		rest;
	int		nbr;
	int		i;
	int		len;

	len = 0;
	i = 0;
	rest = 0;
	result = ft_strnew(ft_strlen(divid));
	ft_fill_A(result, ft_strlen(divid));
	while (divid[i] != '\0')
	{
		if ((divid[i] - '0') > (divis[0] - '0'))
		{
			nbr = (divid[i] - '0') / (divis[0] - '0');
			rest = (divid[i] - '0') % (divis[0] - '0');
		}
		else
		{
			nbr = ft_rest(divid, divis, i);
			rest = 0;
		}
//		printf("nbr = %d\n", nbr);
		result[len] = nbr + '0';
//		printf("result[len] = %c\n", result[len]);
		len++;
//		printf("i = %d\n", i);
//		printf("rest = %d\n", rest);
//		printf("divid[i] = %c\n", divid[i]);
		divid[i] = rest + '0';
//		printf("rest = %d\n", rest);
		if (rest == 0)
			i++;
	}
	printf("result = %s\n", result);
	return (result);
}
