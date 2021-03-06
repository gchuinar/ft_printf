/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:25:29 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/24 03:39:45 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/printf.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = NULL;
	if ((dest = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
	{
		while (str[i] != '\0')
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
