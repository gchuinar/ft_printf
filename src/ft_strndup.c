/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:27:46 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/26 00:08:38 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *str, size_t len)
{
	unsigned long	i;
	char			*dest;

	i = 0;
	dest = NULL;
	if ((dest = (char*)malloc(sizeof(char) * len + 1)))
	{
		while (i < len)
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
