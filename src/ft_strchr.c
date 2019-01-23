/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 07:18:15 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/14 20:47:17 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	ptr = str;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			return ((char*)&ptr[i]);
		i++;
	}
	if (c == '\0')
		return ((char*)&ptr[i]);
	ptr = NULL;
	return (0);
}
