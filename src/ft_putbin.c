/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 02:16:22 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/17 22:01:15 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_putbin(char *nbr)
{
	size_t	len;
	int		i;
	char	*str;
	int		j;

	j = 0;
	str = NULL;
	len = ft_strlen(nbr);
	i = 4 - (len % 4);
	if (i != 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * (len + i) + 1)))
			return (NULL);
		str[len + i + 1] = '\0';
		while (i > 0)
		{
			str[j++] = '0';
			i--;
		}
		while (nbr[i] != '\0')
		{
			str[j] = nbr[i];
			j++;
			i++;
		}
	}
	return (str);
}
