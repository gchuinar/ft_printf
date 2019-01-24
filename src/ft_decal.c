/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:44:58 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 03:52:25 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_decal_0(char *str)
{
	int     i;
	char    *dest;

	i = 0;
	while (str[i] == '0')
		i++;
	if (str[i] == '\0')
		return (ft_strdup("0"));
	dest = ft_strdup(&str[i]);
	return (dest);
}

char	*ft_decal_A(char *str)
{
	int     i;
	char    *dest;

	i = 0;
	while (str[i] == 'A')
		i++;
	dest = ft_strdup(&str[i]);
	return (dest);
}
