/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:00:29 by gchuinar          #+#    #+#             */
/*   Updated: 2019/01/19 02:38:47 by gchuinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;

	str = NULL;
	if ((str = (char*)malloc(sizeof(char) * size + 1)) && size > 0)
		return (ft_memset(str, '\0', (size + 1)));
	return (str);
}
