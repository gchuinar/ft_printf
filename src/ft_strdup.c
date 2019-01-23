/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:25:29 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/20 23:59:43 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
