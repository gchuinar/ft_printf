/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 04:57:12 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/27 23:25:35 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

static char *ft_add_womal(char *nb1, char *nb2)
{
	int     n1;
	int     n2;
	int     ret;
	int     nbr;
	char    *result;

	result = ft_strnew(ft_strlen(nb1));
	n1 = ft_strlen(nb1) - 1;
	n2 = ft_strlen(nb2) - 1;
	ret = 0;
	while (n1 >= 0)
	{
		n2 == -1 ? (nbr = (nb1[n1] - '0') + ret) : (nbr = (nb1[n1] - '0') +  (nb2[n2--] - '0') + ret);
		ret = 0;
		if (nbr > 9)
		{
			result[n1] = (nbr % 10) + '0';
			ret = 1;
		}
		else
			result[n1] = (nbr % 10) + '0';
		n1--;
	}
	return (result);
}

static char *ft_add_chiffre(char nb1, char nb2)
{
	int     nbr;
	char    *result;

	nbr = (nb1 - '0') + (nb2 - '0');
	if (nbr > 9)
	{
		result = ft_strnew(2);
		result[0] = (nbr / 10) + '0';
		result[1] = (nbr % 10) + '0';
	}
	else
	{
		result = ft_strnew(1);
		result[0] = nbr + '0';
	}
	return (result);
}
static char *ft_add_wmal(char *nb1, char *nb2)
{
	char    *result;

	result = ft_strdup(ft_add_womal(&nb1[1], &nb2[1]));
	if (ft_strlen(result) == ft_strlen(&nb1[1]))
		result = ft_strjoin(ft_add_chiffre(nb1[0], nb2[0]), result);
	else
		result = ft_strjoin(ft_add_chiffre(nb1[0], nb2[0]), result);
	return (result);
}

char    *ft_do_add(char *nb1, char *nb2, char *result)
{

	if (ft_sizecmp(nb1, nb2) == 1)
	{
		if (nb1[0] != '9')
			result = ft_add_womal(nb1, nb2);
		else
			result = ft_add_wmal(nb1, nb2);
	}
	else if (ft_sizecmp(nb1, nb2) == 2)
	{
		if (nb2[0] != '9')
			result = ft_add_womal(nb2, nb1);
		else
			result = ft_add_wmal(nb2, nb1);
	}
	else if (ft_sizecmp(nb1, nb2) == 0)
	{
		if (nb1[1] == '\0' && nb2[1] == '\0')
			result = ft_add_chiffre(nb1[0], nb2[0]);
		else
			result = ft_addsamelen(nb1, nb2);
	}
	printf("31 et 32 result = %s\n", result);
	return (result);
}
