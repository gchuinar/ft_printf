/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 01:34:53 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/23 01:16:14 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdio.h>

char	*ft_doop_str(char *nb1, char c, char *nb2)
{
	char	*result;

	result = NULL;
	if (c == '*')
		result = ft_do_mult(nb1, nb2, result);
	/*	else if (c == '/')
			result = ft_do_div(nb1, nb2, result);*/
	else if (c == '+')
		result = ft_do_add(nb1, nb2, result);
	/*	else if (c == '-') 
			result = ft_do_sous(nb1, nb2, result);*/
	else
		ft_putendl("error");
	return (result);
}
