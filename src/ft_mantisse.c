/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mantisse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 03:02:46 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/28 05:19:03 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>
char	*ft_mantisse(char *mant)
{
	char	*nbr;
	char	*result;
	int		i;
	int		j;

	i = 0;
	result = ft_strdup("0");
	while (mant[i] != '\0')
	{
		printf("i = %d\n", i);
		nbr = ft_strdup("100000000000000000000000");
		if (mant[i] == '1')
		{
			j = i;
			while (j + 1 > 0)
			{
				nbr = ft_do_div_2(nbr, "2");
				j--;
			}
			result = ft_doop_str(nbr, '+', result);
		}
		i++;
	}
	return (result);
}
