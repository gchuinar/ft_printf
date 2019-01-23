/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 09:35:22 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:40:21 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_strrev(char *str)
{
	unsigned long	i;
	size_t			j;
	char			c;

	i = 0;
	if (!str)
		return (NULL);
	j = ft_strlen(str);
	j--;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}
